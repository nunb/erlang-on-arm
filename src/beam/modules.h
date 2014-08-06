#ifndef MODULES_H_
#define MODULES_H_
#define MODULES_N 5

#define ENTRYPOINT_ARITY 0
#define ENTRYPOINT_M "main"
#define ENTRYPOINT_F "main"
#define ENTRYPOINT_M_LEN 4
#define ENTRYPOINT_F_LEN 4

const byte module_led_drv[] = {70,79,82,49,0,0,2,228,66,69,65,77,65,116,111,109,0,0,0,102,0,0,0,13,7,108,101,100,95,100,114,118,4,105,110,105,116,8,108,112,99,95,103,112,105,111,6,111,117,116,112,117,116,4,104,105,103,104,3,108,111,119,4,108,111,111,112,6,116,111,103,103,108,101,7,116,105,109,101,111,117,116,6,101,114,108,97,110,103,4,101,120,105,116,11,109,111,100,117,108,101,95,105,110,102,111,15,103,101,116,95,109,111,100,117,108,101,95,105,110,102,111,0,0,67,111,100,101,0,0,0,207,0,0,0,16,0,0,0,0,0,0,0,153,0,0,0,13,0,0,0,4,1,16,153,16,2,18,34,32,1,32,12,32,32,64,19,4,64,3,20,153,32,7,32,0,64,4,19,64,20,3,153,48,7,32,16,64,4,19,64,98,35,64,20,3,5,48,69,32,1,48,153,64,2,18,114,48,1,64,12,48,48,64,35,4,64,19,20,64,3,36,153,80,1,80,23,133,3,43,117,3,130,21,64,20,19,17,4,64,36,3,153,96,7,32,32,153,112,1,96,26,101,105,232,22,64,20,19,64,36,3,17,20,17,36,153,128,7,32,16,64,146,3,153,144,7,16,48,1,112,21,64,20,19,64,4,35,64,36,3,5,48,69,48,1,128,25,85,1,144,153,0,2,18,194,0,1,160,64,18,3,153,0,78,16,64,1,176,153,0,2,18,194,16,1,192,64,3,19,64,18,3,153,0,78,32,80,3,0,83,116,114,84,0,0,0,0,73,109,112,84,0,0,0,76,0,0,0,6,0,0,0,3,0,0,0,4,0,0,0,2,0,0,0,3,0,0,0,5,0,0,0,2,0,0,0,3,0,0,0,6,0,0,0,2,0,0,0,10,0,0,0,11,0,0,0,1,0,0,0,10,0,0,0,13,0,0,0,1,0,0,0,10,0,0,0,13,0,0,0,2,69,120,112,84,0,0,0,40,0,0,0,3,0,0,0,12,0,0,0,1,0,0,0,12,0,0,0,12,0,0,0,0,0,0,0,10,0,0,0,2,0,0,0,2,0,0,0,2,76,111,99,84,0,0,0,16,0,0,0,1,0,0,0,7,0,0,0,3,0,0,0,4,65,116,116,114,0,0,0,40,131,108,0,0,0,1,104,2,100,0,3,118,115,110,108,0,0,0,1,110,16,0,232,222,69,208,192,174,195,249,58,162,252,75,83,75,194,50,106,106,67,73,110,102,0,0,0,136,131,108,0,0,0,4,104,2,100,0,7,111,112,116,105,111,110,115,106,104,2,100,0,7,118,101,114,115,105,111,110,107,0,5,52,46,57,46,52,104,2,100,0,4,116,105,109,101,104,6,98,0,0,7,222,97,8,97,6,97,22,97,38,97,50,104,2,100,0,6,115,111,117,114,99,101,107,0,56,47,85,115,101,114,115,47,83,116,117,100,110,105,99,107,105,47,119,111,114,107,47,109,103,114,47,101,120,97,109,112,108,101,115,47,108,101,100,95,102,105,110,97,108,47,108,101,100,95,100,114,118,46,101,114,108,106,65,98,115,116,0,0,0,0,76,105,110,101,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,13,0,0,0,9,0,0,0,0,81,97,113,161,9,20,9,22,9,23,9,24,9,25,0,0};
const byte module_led_sup[] = {70,79,82,49,0,0,9,180,66,69,65,77,65,116,111,109,0,0,1,176,0,0,0,47,7,108,101,100,95,115,117,112,5,115,116,97,114,116,4,105,110,105,116,4,116,114,117,101,9,116,114,97,112,95,101,120,105,116,6,101,114,108,97,110,103,12,112,114,111,99,101,115,115,95,102,108,97,103,4,115,101,108,102,6,116,111,103,103,108,101,4,108,111,111,112,7,114,101,115,116,97,114,116,4,69,88,73,84,13,104,97,110,100,108,101,95,116,111,103,103,108,101,6,108,101,110,103,116,104,3,100,105,118,10,115,101,110,100,95,97,102,116,101,114,11,104,97,110,100,108,101,95,101,120,105,116,5,108,105,115,116,115,7,107,101,121,102,105,110,100,3,108,101,100,8,108,112,99,95,103,112,105,111,3,108,111,119,9,108,112,99,95,100,101,98,117,103,9,100,117,109,112,95,114,101,103,115,10,112,114,105,110,116,95,116,101,114,109,10,112,114,105,110,116,95,105,110,102,111,10,100,117,109,112,95,115,116,97,99,107,9,100,117,109,112,95,104,101,97,112,14,104,97,110,100,108,101,95,114,101,115,116,97,114,116,10,107,101,121,114,101,112,108,97,99,101,11,114,97,110,100,111,109,95,108,101,100,115,6,114,97,110,100,111,109,7,117,110,105,102,111,114,109,3,110,116,104,6,100,101,108,101,116,101,1,45,9,115,116,97,114,116,95,108,101,100,6,111,117,116,112,117,116,4,104,105,103,104,7,108,101,100,95,100,114,118,10,115,112,97,119,110,95,108,105,110,107,10,115,101,116,101,108,101,109,101,110,116,8,99,104,105,108,100,114,101,110,11,109,111,100,117,108,101,95,105,110,102,111,15,103,101,116,95,109,111,100,117,108,101,95,105,110,102,111,27,45,104,97,110,100,108,101,95,116,111,103,103,108,101,47,49,45,108,99,36,94,48,47,49,45,48,45,18,45,105,110,105,116,47,48,45,108,99,36,94,48,47,49,45,48,45,67,111,100,101,0,0,4,83,0,0,0,16,0,0,0,0,0,0,0,153,0,0,0,41,0,0,0,14,1,16,153,16,2,18,34,0,1,32,6,0,69,1,48,153,32,2,18,50,0,1,64,14,16,0,64,66,19,64,82,3,153,48,7,32,0,153,64,4,0,13,29,153,64,4,16,13,39,9,16,19,64,3,4,64,19,3,64,146,19,153,80,20,64,4,3,5,16,101,16,1,80,153,96,2,18,162,16,1,96,12,16,16,64,3,4,153,112,1,112,23,197,3,57,165,3,60,3,181,23,64,32,133,48,149,1,128,66,3,0,19,66,3,16,35,43,181,19,178,21,64,4,19,64,35,3,5,32,13,19,16,1,144,66,3,0,19,66,3,16,35,43,181,19,194,21,64,4,19,64,35,3,5,32,13,16,16,1,160,43,181,3,146,21,64,4,3,5,16,229,16,1,176,21,64,4,3,5,16,101,16,1,192,25,117,1,208,153,128,2,18,210,16,1,224,14,16,16,153,144,124,5,16,32,3,19,153,144,125,5,32,48,19,33,19,64,3,4,153,144,4,32,13,21,64,4,3,153,160,4,16,13,35,9,16,19,64,146,35,64,105,232,3,153,176,7,48,64,64,4,3,5,16,101,16,1,240,153,192,2,18,10,17,32,1,8,16,12,48,32,17,4,64,19,35,64,65,19,64,35,20,64,3,36,153,208,7,48,80,57,13,17,3,58,13,17,3,64,66,3,0,19,66,3,32,35,43,13,17,19,10,20,57,13,17,35,58,13,17,35,32,66,35,0,3,66,35,16,19,153,224,7,32,96,16,48,0,9,16,19,70,32,35,71,178,71,36,17,36,64,105,232,3,153,240,7,48,64,64,20,3,5,16,101,48,1,8,17,64,3,4,153,8,16,7,0,112,64,17,3,153,8,17,7,16,128,64,36,3,153,8,18,7,16,128,64,20,3,153,8,19,7,16,128,64,4,3,136,16,32,153,8,20,7,16,128,64,65,19,64,4,35,64,20,3,17,20,153,8,21,7,48,80,153,8,21,7,16,128,153,8,22,7,0,144,153,8,23,7,0,160,153,8,24,7,0,176,64,4,3,5,16,101,32,1,8,18,153,8,25,2,18,10,29,32,1,8,19,12,32,32,64,19,35,64,65,19,64,35,4,64,3,20,153,8,26,7,48,80,153,8,27,4,16,13,26,64,4,35,64,65,19,64,3,51,64,20,3,136,32,0,153,8,28,7,64,192,5,16,101,0,1,8,20,153,8,29,2,18,10,31,32,1,8,21,64,2,35,6,48,13,23,1,8,22,153,8,30,2,18,10,31,48,1,8,23,43,13,24,19,1,64,35,3,19,1,8,24,14,48,48,153,8,31,124,5,48,32,3,51,64,3,4,64,51,3,64,19,20,64,35,36,153,8,31,7,16,208,64,4,19,153,8,32,7,32,224,64,4,19,64,3,4,153,8,33,7,32,240,153,8,33,125,5,16,8,16,20,17,19,16,32,32,69,4,36,35,5,48,13,23,48,1,8,25,153,8,34,2,18,10,37,16,1,8,26,57,13,27,3,58,13,27,3,64,66,3,0,19,66,3,16,35,66,3,32,51,43,13,27,19,10,20,57,13,27,35,58,13,27,35,32,66,35,0,67,66,35,16,83,57,13,27,51,58,13,27,51,32,12,80,96,66,51,0,99,66,51,16,19,64,3,68,64,99,3,64,19,4,64,3,20,64,83,36,64,67,52,153,8,35,7,32,8,17,64,4,19,64,20,3,136,32,48,153,8,36,7,32,8,18,16,64,0,69,4,2,3,69,20,3,35,64,50,19,136,32,16,64,10,40,3,153,8,37,7,48,8,19,64,4,19,64,3,35,64,65,3,153,8,38,8,48,8,20,16,1,8,27,12,16,16,64,3,4,153,8,39,7,0,112,64,33,3,153,8,40,7,16,128,64,4,3,136,16,0,153,8,41,7,16,128,153,8,42,7,0,144,153,8,43,7,0,160,153,8,44,8,0,176,0,1,8,28,153,8,45,2,18,10,43,0,1,8,29,64,71,0,3,19,1,8,30,153,0,2,18,10,44,0,1,8,31,64,18,3,153,0,78,16,8,21,1,8,32,153,0,2,18,10,44,16,1,8,33,64,3,19,64,18,3,153,0,78,32,8,22,1,8,34,153,160,2,18,10,46,16,1,8,35,56,13,37,3,65,3,19,35,57,13,36,19,58,13,36,19,64,66,19,0,51,66,19,48,67,43,13,36,51,10,20,12,16,80,64,146,19,64,67,3,64,35,4,153,160,20,64,4,3,5,16,13,35,16,1,8,36,64,35,3,6,16,13,35,1,8,37,52,13,34,3,19,1,8,38,153,64,2,18,10,47,16,1,8,39,56,13,40,3,12,16,16,65,3,3,4,153,64,4,16,13,26,64,3,19,64,4,3,64,19,4,153,64,4,16,13,39,16,32,16,69,4,3,3,18,16,19,1,8,40,52,13,38,3,19,3,0,83,116,114,84,0,0,0,0,73,109,112,84,0,0,1,24,0,0,0,23,0,0,0,6,0,0,0,7,0,0,0,2,0,0,0,6,0,0,0,8,0,0,0,0,0,0,0,6,0,0,0,14,0,0,0,1,0,0,0,6,0,0,0,15,0,0,0,2,0,0,0,6,0,0,0,16,0,0,0,3,0,0,0,18,0,0,0,19,0,0,0,3,0,0,0,21,0,0,0,22,0,0,0,2,0,0,0,23,0,0,0,24,0,0,0,0,0,0,0,23,0,0,0,25,0,0,0,1,0,0,0,23,0,0,0,26,0,0,0,0,0,0,0,23,0,0,0,27,0,0,0,0,0,0,0,23,0,0,0,28,0,0,0,0,0,0,0,18,0,0,0,30,0,0,0,4,0,0,0,32,0,0,0,33,0,0,0,1,0,0,0,18,0,0,0,34,0,0,0,2,0,0,0,18,0,0,0,35,0,0,0,2,0,0,0,6,0,0,0,36,0,0,0,2,0,0,0,21,0,0,0,38,0,0,0,2,0,0,0,21,0,0,0,39,0,0,0,2,0,0,0,6,0,0,0,41,0,0,0,3,0,0,0,6,0,0,0,42,0,0,0,3,0,0,0,6,0,0,0,45,0,0,0,1,0,0,0,6,0,0,0,45,0,0,0,2,69,120,112,84,0,0,0,40,0,0,0,3,0,0,0,44,0,0,0,1,0,0,0,33,0,0,0,44,0,0,0,0,0,0,0,31,0,0,0,2,0,0,0,0,0,0,0,2,76,105,116,84,0,0,0,111,0,0,0,1,0,0,0,103,131,108,0,0,0,3,104,4,100,0,3,108,101,100,104,2,97,2,97,0,104,2,97,2,97,1,100,0,9,117,110,100,101,102,105,110,101,100,104,4,100,0,3,108,101,100,104,2,97,2,97,2,104,2,97,2,97,3,100,0,9,117,110,100,101,102,105,110,101,100,104,4,100,0,3,108,101,100,104,2,97,2,97,4,104,2,97,2,97,5,100,0,9,117,110,100,101,102,105,110,101,100,106,0,76,111,99,84,0,0,0,136,0,0,0,11,0,0,0,47,0,0,0,1,0,0,0,39,0,0,0,46,0,0,0,1,0,0,0,35,0,0,0,43,0,0,0,0,0,0,0,29,0,0,0,37,0,0,0,1,0,0,0,26,0,0,0,31,0,0,0,3,0,0,0,23,0,0,0,31,0,0,0,2,0,0,0,21,0,0,0,29,0,0,0,2,0,0,0,19,0,0,0,17,0,0,0,2,0,0,0,16,0,0,0,13,0,0,0,1,0,0,0,14,0,0,0,10,0,0,0,1,0,0,0,6,0,0,0,3,0,0,0,0,0,0,0,4,65,116,116,114,0,0,0,40,131,108,0,0,0,1,104,2,100,0,3,118,115,110,108,0,0,0,1,110,16,0,240,29,195,222,126,42,95,157,26,129,251,210,121,130,87,250,106,106,67,73,110,102,0,0,0,136,131,108,0,0,0,4,104,2,100,0,7,111,112,116,105,111,110,115,106,104,2,100,0,7,118,101,114,115,105,111,110,107,0,5,52,46,57,46,52,104,2,100,0,4,116,105,109,101,104,6,98,0,0,7,222,97,8,97,6,97,22,97,38,97,50,104,2,100,0,6,115,111,117,114,99,101,107,0,56,47,85,115,101,114,115,47,83,116,117,100,110,105,99,107,105,47,119,111,114,107,47,109,103,114,47,101,120,97,109,112,108,101,115,47,108,101,100,95,102,105,110,97,108,47,108,101,100,95,115,117,112,46,101,114,108,106,65,98,115,116,0,0,0,0,76,105,110,101,0,0,0,106,0,0,0,0,0,0,0,0,0,0,0,60,0,0,0,45,0,0,0,0,161,209,225,241,9,16,9,19,9,20,9,31,9,32,9,33,9,34,9,37,9,38,9,41,9,42,9,45,9,46,9,47,9,48,9,49,9,50,9,51,9,52,9,53,9,57,9,58,9,59,9,60,9,63,9,66,9,69,9,70,9,71,9,73,9,74,9,75,9,76,9,77,9,79,9,80,9,81,9,82,9,83,9,84,9,86,0,0};
const byte module_lists[] = {70,79,82,49,0,0,3,180,66,69,65,77,65,116,111,109,0,0,0,102,0,0,0,13,5,108,105,115,116,115,3,110,116,104,6,101,114,108,97,110,103,1,45,6,100,101,108,101,116,101,7,114,101,118,101,114,115,101,2,43,43,7,107,101,121,102,105,110,100,7,101,108,101,109,101,110,116,5,102,97,108,115,101,10,107,101,121,114,101,112,108,97,99,101,11,109,111,100,117,108,101,95,105,110,102,111,15,103,101,116,95,109,111,100,117,108,101,95,105,110,102,111,0,0,67,111,100,101,0,0,1,102,0,0,0,16,0,0,0,0,0,0,0,153,0,0,0,24,0,0,0,8,1,16,153,16,2,18,34,32,1,32,43,53,3,17,56,21,19,65,19,3,51,19,1,48,56,21,19,65,19,35,51,153,32,125,5,64,0,3,17,3,64,51,19,6,32,37,1,64,153,48,2,18,82,32,1,80,64,2,35,6,48,117,1,96,153,64,2,18,82,48,1,112,56,149,19,65,19,51,67,43,133,51,3,12,16,80,64,35,3,64,67,4,153,80,7,16,16,64,4,19,153,80,8,32,32,16,1,128,16,32,80,69,51,35,35,64,67,19,6,48,117,1,144,52,101,19,64,35,3,153,96,78,16,16,1,160,153,112,2,18,130,48,1,176,56,213,35,65,35,51,67,153,128,11,5,48,19,51,35,43,197,35,3,64,51,3,19,1,192,64,67,35,6,48,181,1,208,52,165,35,64,162,3,19,1,224,153,144,2,18,178,64,1,240,64,2,67,6,80,13,17,1,8,16,153,160,2,18,178,80,1,8,17,56,13,19,35,14,16,80,65,35,83,99,153,176,11,5,48,19,83,35,43,13,18,35,3,16,32,112,64,99,4,69,51,67,3,153,192,7,16,16,64,4,19,153,192,8,32,32,16,1,8,18,16,32,112,69,83,67,67,64,99,35,5,80,13,17,16,1,8,19,52,13,16,35,64,67,3,153,208,78,16,16,1,8,20,153,0,2,18,194,0,1,8,21,64,18,3,153,0,78,16,64,1,8,22,153,0,2,18,194,16,1,8,23,64,3,19,64,18,3,153,0,78,32,80,3,0,0,83,116,114,84,0,0,0,0,73,109,112,84,0,0,0,76,0,0,0,6,0,0,0,3,0,0,0,4,0,0,0,2,0,0,0,1,0,0,0,6,0,0,0,1,0,0,0,3,0,0,0,7,0,0,0,2,0,0,0,3,0,0,0,9,0,0,0,2,0,0,0,3,0,0,0,13,0,0,0,1,0,0,0,3,0,0,0,13,0,0,0,2,69,120,112,84,0,0,0,76,0,0,0,6,0,0,0,12,0,0,0,1,0,0,0,23,0,0,0,12,0,0,0,0,0,0,0,21,0,0,0,11,0,0,0,4,0,0,0,15,0,0,0,8,0,0,0,3,0,0,0,11,0,0,0,5,0,0,0,2,0,0,0,5,0,0,0,2,0,0,0,2,0,0,0,2,76,111,99,84,0,0,0,28,0,0,0,2,0,0,0,11,0,0,0,5,0,0,0,17,0,0,0,5,0,0,0,3,0,0,0,7,65,116,116,114,0,0,0,40,131,108,0,0,0,1,104,2,100,0,3,118,115,110,108,0,0,0,1,110,16,0,77,219,131,102,56,126,242,230,196,227,229,13,164,8,136,78,106,106,67,73,110,102,0,0,0,134,131,108,0,0,0,4,104,2,100,0,7,111,112,116,105,111,110,115,106,104,2,100,0,7,118,101,114,115,105,111,110,107,0,5,52,46,57,46,52,104,2,100,0,4,116,105,109,101,104,6,98,0,0,7,222,97,8,97,6,97,22,97,38,97,50,104,2,100,0,6,115,111,117,114,99,101,107,0,54,47,85,115,101,114,115,47,83,116,117,100,110,105,99,107,105,47,119,111,114,107,47,109,103,114,47,101,120,97,109,112,108,101,115,47,108,101,100,95,102,105,110,97,108,47,108,105,115,116,115,46,101,114,108,106,0,0,65,98,115,116,0,0,0,0,76,105,110,101,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,19,0,0,0,13,0,0,0,0,129,145,177,225,9,17,241,9,21,9,24,9,29,9,32,9,35,9,37,9,33,0,0,0};
const byte module_main[] = {70,79,82,49,0,0,1,248,66,69,65,77,65,116,111,109,0,0,0,58,0,0,0,6,4,109,97,105,110,7,108,101,100,95,115,117,112,5,115,116,97,114,116,11,109,111,100,117,108,101,95,105,110,102,111,6,101,114,108,97,110,103,15,103,101,116,95,109,111,100,117,108,101,95,105,110,102,111,0,0,67,111,100,101,0,0,0,75,0,0,0,16,0,0,0,0,0,0,0,153,0,0,0,7,0,0,0,3,1,16,153,16,2,18,18,0,1,32,153,32,78,0,0,1,48,153,0,2,18,66,0,1,64,64,18,3,153,0,78,16,16,1,80,153,0,2,18,66,16,1,96,64,3,19,64,18,3,153,0,78,32,32,3,0,83,116,114,84,0,0,0,0,73,109,112,84,0,0,0,40,0,0,0,3,0,0,0,2,0,0,0,3,0,0,0,0,0,0,0,5,0,0,0,6,0,0,0,1,0,0,0,5,0,0,0,6,0,0,0,2,69,120,112,84,0,0,0,40,0,0,0,3,0,0,0,4,0,0,0,1,0,0,0,6,0,0,0,4,0,0,0,0,0,0,0,4,0,0,0,1,0,0,0,0,0,0,0,2,76,111,99,84,0,0,0,4,0,0,0,0,65,116,116,114,0,0,0,40,131,108,0,0,0,1,104,2,100,0,3,118,115,110,108,0,0,0,1,110,16,0,208,177,69,53,168,239,134,133,38,161,19,12,104,118,231,143,106,106,67,73,110,102,0,0,0,133,131,108,0,0,0,4,104,2,100,0,7,111,112,116,105,111,110,115,106,104,2,100,0,7,118,101,114,115,105,111,110,107,0,5,52,46,57,46,52,104,2,100,0,4,116,105,109,101,104,6,98,0,0,7,222,97,8,97,6,97,22,97,38,97,50,104,2,100,0,6,115,111,117,114,99,101,107,0,53,47,85,115,101,114,115,47,83,116,117,100,110,105,99,107,105,47,119,111,114,107,47,109,103,114,47,101,120,97,109,112,108,101,115,47,108,101,100,95,102,105,110,97,108,47,109,97,105,110,46,101,114,108,106,0,0,0,65,98,115,116,0,0,0,0,76,105,110,101,0,0,0,22,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,2,0,0,0,0,81,97,0,0};
const byte module_random[] = {70,79,82,49,0,0,2,64,66,69,65,77,65,116,111,109,0,0,0,64,0,0,0,8,6,114,97,110,100,111,109,7,117,110,105,102,111,114,109,6,101,114,108,97,110,103,3,110,111,119,3,114,101,109,1,43,11,109,111,100,117,108,101,95,105,110,102,111,15,103,101,116,95,109,111,100,117,108,101,95,105,110,102,111,67,111,100,101,0,0,0,119,0,0,0,16,0,0,0,0,0,0,0,153,0,0,0,8,0,0,0,3,1,16,153,16,2,18,34,16,1,32,12,16,16,64,3,4,153,32,7,0,0,57,53,3,58,53,3,48,66,3,32,19,153,48,125,5,32,16,19,4,3,153,48,125,5,32,32,3,17,3,18,16,19,1,48,153,32,72,3,1,64,153,0,2,18,114,0,1,80,64,18,3,153,0,78,16,48,1,96,153,0,2,18,114,16,1,112,64,3,19,64,18,3,153,0,78,32,64,3,0,83,116,114,84,0,0,0,0,73,109,112,84,0,0,0,64,0,0,0,5,0,0,0,3,0,0,0,4,0,0,0,0,0,0,0,3,0,0,0,5,0,0,0,2,0,0,0,3,0,0,0,6,0,0,0,2,0,0,0,3,0,0,0,8,0,0,0,1,0,0,0,3,0,0,0,8,0,0,0,2,69,120,112,84,0,0,0,40,0,0,0,3,0,0,0,7,0,0,0,1,0,0,0,7,0,0,0,7,0,0,0,0,0,0,0,5,0,0,0,2,0,0,0,1,0,0,0,2,76,111,99,84,0,0,0,4,0,0,0,0,65,116,116,114,0,0,0,40,131,108,0,0,0,1,104,2,100,0,3,118,115,110,108,0,0,0,1,110,16,0,11,4,58,10,17,25,5,56,247,33,131,41,96,34,255,169,106,106,67,73,110,102,0,0,0,135,131,108,0,0,0,4,104,2,100,0,7,111,112,116,105,111,110,115,106,104,2,100,0,7,118,101,114,115,105,111,110,107,0,5,52,46,57,46,52,104,2,100,0,4,116,105,109,101,104,6,98,0,0,7,222,97,8,97,6,97,22,97,38,97,50,104,2,100,0,6,115,111,117,114,99,101,107,0,55,47,85,115,101,114,115,47,83,116,117,100,110,105,99,107,105,47,119,111,114,107,47,109,103,114,47,101,120,97,109,112,108,101,115,47,108,101,100,95,102,105,110,97,108,47,114,97,110,100,111,109,46,101,114,108,106,0,65,98,115,116,0,0,0,0,76,105,110,101,0,0,0,23,0,0,0,0,0,0,0,0,0,0,0,9,0,0,0,3,0,0,0,0,81,97,113,0};

const byte* code[] = { module_led_drv,module_led_sup,module_lists,module_main,module_random };

const Eterm entrypoint_a[] = {};
#endif
