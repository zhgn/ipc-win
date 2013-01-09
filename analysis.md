Inter Process Communication
===========================

Debug
-----
- Build Debug *gtest.sln*
- Build Debug *protobuf.sln*
- Build Debug *ipc.sln*

Release
-------
- Build *ipc.sln*


TODO
====
- Native <-> Managed
- Manged <-> Managed
- Evaluate UI syncronization impact
- Pushing many small(1kb) data items to clients process
- Send 0.1kb, 1kb, 3kb one way
- Check batching for very very small items
- Broadcasting data to 10 processes
- 400kb and 2000kb, 1kb and 1kb requests/responses
- Make multithreaded tests (consider single chanell memory issues)

Considerations
==============
Windows provides various IPC[1] mechanims all baesed on shared memory[2]. It means that any mechanims can beat shared memory, but can use different api

Conclusion
==========
- When making few big data exchanges then IPC(syncronization and memory copying) is neglectable if to compare with object serialization to byte array. Better having simple objects (e.g. string or array of string or with sequential memory layout) for IPC.
- Adhoc byte array serialization is viable solution because using objects translation to serializable(Protobuf) messages can happen to be unallowable overhead.
- Need find ways to optimize chaty(many small requests) conversations. E.g. tuning syncronization, IPC buffers, batching.

Measurments with comments highlighted
=====================================
[Machine specification]
---

NOTE: next requests/respones are synchronous with one sending process and one single threaded waiting process


Client sending raw bytes via Shared Memory
---
Client process requests ~100kb and gets ~1000kb response of server process
  *  Avg. time **0.000800085 sec**
  *  Min. time 0.00100017 sec
  *  Max. time 0.00199986 sec
  *  Tot. time 0.00800085 sec
  *  Stops 10
  
Client process requests ~50kb and gets ~500kb response of server process
  *  Avg. time 0.000300038 sec
  *  Min. time 0 sec
  *  Max. time 0.0010004 sec
  *  Tot. time 0.00600076 sec
  *  Stops 20
  
Client process requests ~10kb and gets ~100kb response  of server process
  *  Avg. time 0.000110011 sec
  *  Min. time 0 sec
  *  Max. time 0.00100017 sec
  *  Tot. time 0.0110011 sec
  *  Stops 100

Client process requests ~1kb and gets ~10kb response  of server process
  *  Avg. time 6.40063e-005 sec
  *  Min. time 0 sec
  *  Max. time 0.0010004 sec
  *  Tot. time **0.0640063 sec**
  *  Stops 1000
  
  
Client sending raw bytes via Named Pipes
---

Client process requests ~100kb and gets ~1000kb response of server process
  *  Avg. time 0.00150018 sec
  *  Min. time 0.000999928 sec
  *  Max. time 0.00200057 sec
  *  Tot. time 0.0150018 sec
  *  Stops 10

Client process requests ~50kb and gets ~500kb response of server process
  *  Avg. time 0.000750077 sec
  *  Min. time 0.000999928 sec
  *  Max. time 0.00100017 sec
  *  Tot. time 0.0150015 sec
  *  Stops 20
Client process requests ~10kb and gets ~100kb response  of server process
  *  Avg. time 0.000130014 sec
  *  Min. time 0 sec
  *  Max. time 0.0010004 sec
  *  Tot. time 0.0130014 sec
  *  Stops 100

Client process requests ~1kb and gets ~10kb response  of server process
  *  Avg. time 5.70059e-005 sec
  *  Min. time 0 sec
  *  Max. time 0.0010004 sec
  *  Tot. time `0.0570059 sec`
  *  Stops 1000

  
Client sending adhoc serialized requests via Shared Memory and expecting adhoc objects response
---

Client process requests ~100kb and gets ~1000kb response of server process
  *  Avg. time 0.0214021 sec
  *  Min. time 0.00199986 sec
  *  Max. time 0.0370038 sec
  *  Tot. time 0.214021 sec
  *  Stops 10

Client process requests ~50kb and gets ~500kb response of server process
  *  Avg. time `0.0107511 sec`
  *  Min. time 0.00900078 sec
  *  Max. time 0.0180018 sec
  *  Tot. time 0.215022 sec
  *  Stops 20

Client process requests ~10kb and gets ~100kb response  of server process
  *  Avg. time 0.0019702 sec
  *  Min. time 0.000999928 sec
  *  Max. time 0.00800085 sec
  *  Tot. time 0.19702 sec
  *  Stops 100

Client process requests ~1kb and gets ~10kb response  of server process
  *  Avg. time 0.000246025 sec
  *  Min. time 0 sec
  *  Max. time 0.0010004 sec
  *  Tot. time 0.246025 sec
  *  Stops 1000

Client sending request via Shared Memory using objects translated into Protobuf messages, expecting messages and translating them back
---

Client process requests ~100kb and gets ~1000kb response of server process
  *  Avg. time 0.0342034 sec
  *  Min. time 0.00400043 sec
  *  Max. time 0.0560055 sec
  *  Tot. time 0.342034 sec
  *  Stops 10

Client process requests ~50kb and gets ~500kb response of server process
  *  Avg. time `0.0180518 sec`
  *  Min. time 0.0160017 sec
  *  Max. time 0.0330033 sec
  *  Tot. time 0.361036 sec
  *  Stops 20

Client process requests ~10kb and gets ~100kb response  of server process
  *  Avg. time 0.00326032 sec
  *  Min. time 0.00300002 sec
  *  Max. time 0.0160017 sec
  *  Tot. time 0.326032 sec
  *  Stops 100

Client process requests ~1kb and gets ~10kb response  of server process
  *  Avg. time 0.000384039 sec
  *  Min. time 0 sec
  *  Max. time 0.00200009 sec
  *  Tot. time 0.384039 sec
  *  Stops 1000





 [Machine specification]: http://valid.canardpc.com/2639433
 [Fastest IPC method on Windows XP/Vista]: https://onegazhang.wordpress.com/2008/05/28/fastest-ipc-method-on-windows-xpvista/