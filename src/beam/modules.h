#ifndef MODULES_H_
#define MODULES_H_
#define MODULES_N 3

#define ENTRYPOINT_ARITY 0
#define ENTRYPOINT_M "main"
#define ENTRYPOINT_F "main"
#define ENTRYPOINT_M_LEN 4
#define ENTRYPOINT_F_LEN 4

byte module_fac[] = {70,79,82,49,0,0,2,24,66,69,65,77,65,116,111,109,0,0,0,47,0,0,0,6,3,102,97,99,6,101,114,108,97,110,103,1,45,1,42,11,109,111,100,117,108,101,95,105,110,102,111,15,103,101,116,95,109,111,100,117,108,101,95,105,110,102,111,0,67,111,100,101,0,0,0,115,0,0,0,16,0,0,0,0,0,0,0,153,0,0,0,8,0,0,0,3,1,16,153,16,2,18,18,16,1,32,43,53,3,1,64,17,3,19,1,48,14,16,16,153,32,125,5,16,0,3,17,19,64,3,4,64,19,3,153,32,4,16,37,153,32,125,5,16,16,4,3,3,18,16,19,1,64,153,0,2,18,82,0,1,80,64,18,3,153,0,78,16,32,1,96,153,0,2,18,82,16,1,112,64,3,19,64,18,3,153,0,78,32,48,3,0,83,116,114,84,0,0,0,0,73,109,112,84,0,0,0,52,0,0,0,4,0,0,0,2,0,0,0,3,0,0,0,2,0,0,0,2,0,0,0,4,0,0,0,2,0,0,0,2,0,0,0,6,0,0,0,1,0,0,0,2,0,0,0,6,0,0,0,2,69,120,112,84,0,0,0,40,0,0,0,3,0,0,0,5,0,0,0,1,0,0,0,7,0,0,0,5,0,0,0,0,0,0,0,5,0,0,0,1,0,0,0,1,0,0,0,2,76,111,99,84,0,0,0,4,0,0,0,0,65,116,116,114,0,0,0,40,131,108,0,0,0,1,104,2,100,0,3,118,115,110,108,0,0,0,1,110,16,0,163,238,181,173,105,8,158,14,200,39,172,176,63,156,128,208,106,106,67,73,110,102,0,0,0,126,131,108,0,0,0,4,104,2,100,0,7,111,112,116,105,111,110,115,106,104,2,100,0,7,118,101,114,115,105,111,110,107,0,5,52,46,57,46,52,104,2,100,0,4,116,105,109,101,104,6,98,0,0,7,222,97,6,97,23,97,23,97,1,97,15,104,2,100,0,6,115,111,117,114,99,101,107,0,46,47,85,115,101,114,115,47,83,116,117,100,110,105,99,107,105,47,119,111,114,107,47,109,103,114,47,101,120,97,109,112,108,101,115,47,102,97,99,47,102,97,99,46,101,114,108,106,0,0,65,98,115,116,0,0,0,0,76,105,110,101,0,0,0,22,0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,2,0,0,0,0,81,129,0,0};
byte module_fac2[] = {70,79,82,49,0,0,2,44,66,69,65,77,65,116,111,109,0,0,0,52,0,0,0,7,4,102,97,99,50,3,102,97,99,6,101,114,108,97,110,103,1,45,1,42,11,109,111,100,117,108,101,95,105,110,102,111,15,103,101,116,95,109,111,100,117,108,101,95,105,110,102,111,67,111,100,101,0,0,0,120,0,0,0,16,0,0,0,0,0,0,0,153,0,0,0,10,0,0,0,4,1,16,153,16,2,18,34,16,1,32,64,17,19,6,32,69,1,48,153,32,2,18,34,32,1,64,43,85,3,1,64,19,3,19,1,80,153,48,125,5,32,0,3,17,35,153,48,125,5,48,16,3,19,19,64,35,3,6,32,69,1,96,153,0,2,18,98,0,1,112,64,18,3,153,0,78,16,32,1,128,153,0,2,18,98,16,1,144,64,3,19,64,18,3,153,0,78,32,48,3,83,116,114,84,0,0,0,0,73,109,112,84,0,0,0,52,0,0,0,4,0,0,0,3,0,0,0,4,0,0,0,2,0,0,0,3,0,0,0,5,0,0,0,2,0,0,0,3,0,0,0,7,0,0,0,1,0,0,0,3,0,0,0,7,0,0,0,2,69,120,112,84,0,0,0,40,0,0,0,3,0,0,0,6,0,0,0,1,0,0,0,9,0,0,0,6,0,0,0,0,0,0,0,7,0,0,0,2,0,0,0,1,0,0,0,2,76,111,99,84,0,0,0,16,0,0,0,1,0,0,0,2,0,0,0,2,0,0,0,4,65,116,116,114,0,0,0,40,131,108,0,0,0,1,104,2,100,0,3,118,115,110,108,0,0,0,1,110,16,0,135,115,8,227,175,235,0,164,48,19,206,21,168,179,169,78,106,106,67,73,110,102,0,0,0,127,131,108,0,0,0,4,104,2,100,0,7,111,112,116,105,111,110,115,106,104,2,100,0,7,118,101,114,115,105,111,110,107,0,5,52,46,57,46,52,104,2,100,0,4,116,105,109,101,104,6,98,0,0,7,222,97,6,97,23,97,23,97,1,97,15,104,2,100,0,6,115,111,117,114,99,101,107,0,47,47,85,115,101,114,115,47,83,116,117,100,110,105,99,107,105,47,119,111,114,107,47,109,103,114,47,101,120,97,109,112,108,101,115,47,102,97,99,47,102,97,99,50,46,101,114,108,106,0,65,98,115,116,0,0,0,0,76,105,110,101,0,0,0,23,0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,3,0,0,0,0,81,129,145,0};
byte module_main[] = {70,79,82,49,0,0,1,232,66,69,65,77,65,116,111,109,0,0,0,48,0,0,0,5,4,109,97,105,110,3,102,97,99,11,109,111,100,117,108,101,95,105,110,102,111,6,101,114,108,97,110,103,15,103,101,116,95,109,111,100,117,108,101,95,105,110,102,111,67,111,100,101,0,0,0,79,0,0,0,16,0,0,0,0,0,0,0,153,0,0,0,7,0,0,0,3,1,16,153,16,2,18,18,0,1,32,64,9,200,3,153,32,78,16,0,1,48,153,0,2,18,50,0,1,64,64,18,3,153,0,78,16,16,1,80,153,0,2,18,50,16,1,96,64,3,19,64,18,3,153,0,78,32,32,3,0,83,116,114,84,0,0,0,0,73,109,112,84,0,0,0,40,0,0,0,3,0,0,0,2,0,0,0,2,0,0,0,1,0,0,0,4,0,0,0,5,0,0,0,1,0,0,0,4,0,0,0,5,0,0,0,2,69,120,112,84,0,0,0,40,0,0,0,3,0,0,0,3,0,0,0,1,0,0,0,6,0,0,0,3,0,0,0,0,0,0,0,4,0,0,0,1,0,0,0,0,0,0,0,2,76,111,99,84,0,0,0,4,0,0,0,0,65,116,116,114,0,0,0,40,131,108,0,0,0,1,104,2,100,0,3,118,115,110,108,0,0,0,1,110,16,0,210,128,100,72,31,47,117,78,206,66,119,163,31,118,144,141,106,106,67,73,110,102,0,0,0,127,131,108,0,0,0,4,104,2,100,0,7,111,112,116,105,111,110,115,106,104,2,100,0,7,118,101,114,115,105,111,110,107,0,5,52,46,57,46,52,104,2,100,0,4,116,105,109,101,104,6,98,0,0,7,222,97,6,97,23,97,23,97,1,97,15,104,2,100,0,6,115,111,117,114,99,101,107,0,47,47,85,115,101,114,115,47,83,116,117,100,110,105,99,107,105,47,119,111,114,107,47,109,103,114,47,101,120,97,109,112,108,101,115,47,102,97,99,47,109,97,105,110,46,101,114,108,106,0,65,98,115,116,0,0,0,0,76,105,110,101,0,0,0,22,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,2,0,0,0,0,81,97,0,0};

byte* code[] = { module_fac,module_fac2,module_main };

byte* entrypoint_a[] = {};
#endif
