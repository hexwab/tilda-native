#include <stdint.h>
#ifndef TILDA
#include <stdio.h>
#endif
static const uint8_t mout[] =
  	"\xde\x09\x64\x9e\xa0\x7c\x81\x85\x9c\x86\x9c\x86"
	"\x8c\x81\x85\x8d\xa0\xa0\x81\x81\x82\x9c\x81\x85\x9c\x86\x9c\x86"
	"\x8c\x81\x85\x8a\xaa\xaa\x85\x9d\x85\x95\x85\xa8\x83\xb1\x9e\xa0"
	"\x7c\x81\x85\x9c\x86\x9c\x86\x8c\x81\x85\x8d\xa0\xa0\x81\x81\x82"
	"\x9c\x81\x85\x9c\x86\x9c\x86\x8c\x81\x85\x8a\x96\x85\x7c\xbf\xc0"
	"\xe1\xae\xc2\xcd\xb8\xd6\xd6\x85\x7c\xb5\xbf\x64\x3e\xb9\xa0\xa0"
	"\x85\x7c\xb5\x8f\xba\x87\xb3\xcd\xca\x06\x28\xca\xca\x85\x7c\xb2"
	"\xa5\xff\xc3\xe4\x89\x98\x84\x9b\x89\xd6\x3c\x92\xa9\xff\xa0\x3e"
	"\x72\x68\x09\xd6\xa4\xa0\x12\x7c\xa0\x81\x85\xb1\x9e\xa0\x7c\x86"
	"\x9c\x86\x8c\x81\x85\x8d\xa0\xa0\x81\x81\x82\x9c\x81\x85\x9c\x86"
	"\x9c\x86\x8c\x81\x85\x8a\xaa\xaa\x85\x9d\x85\x95\x85\xa8\x83\xb1"
	"\x9e\xa0\x7c\x81\x85\x9c\x86\x9c\x86\x8c\x81\x85\x8d\xa0\xa0\x81"
	"\x81\x82\x9c\x81\x85\x9c\x86\x9c\x86\x8c\x81\x85\x8a\x96\x85\x7c"
	"\xbf\xc0\x64\x3e\xb5\xbf\xd0\x09\xa5\x64\xbf\xaa\x3e\x08\xb8\xd6"
	"\xd6\x85\x7c\xb5\xcd\xb9\x3e\xaa\x7c\x06\x28\xdc\x08\xbf\xc0\xb3"
	"\xcd\xd9\xa6\xb7\x12\xa0\x09\xa0\xff\x05\xa0\xa0\xc1\xbb\xbf\x3f"
	"\x3f\x3c\x64\xa7\x7c\x94\x91\x68\xf1\xa3\xff\xab\xff\x90\x9a\x64"
	"\xa0\xa7\x94\x91\x68\xf1\xa3\xff\xab\xff\x90\x9a\xa0\xd6\x11\x8b"
	"\x88\xa2\x99\xd1\xa1\xdf\x8b\x88\x8e\xb0\xd2\x8f\xaa\x72\x7c\xd6"
	"\x34\x68\xa0\x3e\x64\xc8\xf1\xaa\xc9\xd6\x2a\xa0\xc8\xb6\x15\xac"
	"\xd6\x8f\x2a\xa0\x87\xd5\xd6\x2a\xff\xb8\xd6\xaa\x2a\xbf\xf1\xd4"
	"\xa0\x6b\x13\xa0\xbf\x72\x34\x68\xdd\xda\xf1\xc5\x68\xf1\x2a\xff"
	"\xca\xcc\x6b\x13\x70\xf1\xb5\x68\x8f\xe3\x3e\x08\xb9\xcf\xca\xb5"
	"\xd2\xbf\xbf\x09\xa5\xbf\xa0\x32\x7c\xff\x7e\xc6\x9f\xdb\xd6\xaa"
	"\x66\xd6\xd6\xa6\x11\x85\x7c\xbc\x0a\xad\x7f\x3f\xaf\x8b\x88\xa2"
	"\x99\xd1\xa1\xdf\x8b\x88\x8e\x93\xbd\xd6\xc7\xd8\xb8\xe0\xbf\xb9"
	"\xff\xd8\xb9\xe0\x8f\xc2\xd7\x87\xce\xaa\xca\x0a\xd3\x09\xca\xca"
	"\x85\xb2\xa5\xff\xc3\xe4\x89\x98\x84\x9b\x89\xd6\x3c\x92\xa9\xa0"
	"\xa0\x85\x71\x1d\x68\xd6\x11\x8b\x88\xa2\x99\xd1\xa1\xdf\x8b\x88"
	"\x8e\x93\xbf\xbf\x7d\xa5\x64\xbf\x8f\x2a\xaa\xb8\x8f\xe5\xc4\xa0"
	"\xc7\x04\xd6\x26\xff\xaa\x7e\x28\xd6\x64\x26\xbf\xbe\x04\xd7\xb8"
	"\xe2\xff\xd9\xa6\xb7\x62\xcb\x70\xd6\x73\x15\x78\xa0\x79\x15\x7c"
  "\x80\x80\x81\x81\x81\x84\x1c",
  dict[]=  "\x81\x0e\x1d\x1d\x1d\x1d\x1d\x1d\x1d"
	"\x1d\x1d\x1d\x1d\x1d\x1d\x1d\x82\x0c\x1d\x1d\x1d\x1d\x1d\x1d\x1d"
	"\x1d\x1d\x1d\x1d\x1d\x83\x09\x1d\x1d\x1d\x1d\x1d\x1d\x1d\x1d\x1d"
	"\x84\x08\x1d\x1d\x1d\x1d\x1d\x1d\x1d\x1d\x85\x06\x1d\x1d\x1d\x1d"
	"\x1d\x1d\x86\x04\x1d\x1d\x1d\x1d\x88\x78\x12\xff\x7e\x68\xbf\x6a"
	"\xe3\xbf\x09\xa0\x69\xff\x65\xbf\x65\x7c\xd6\xff\x1e\x28\xbf\x1e"
	"\x28\x1c\xaa\x1e\x28\x68\xbf\x12\xff\xff\x05\xd6\x69\xff\x65\xbf"
	"\x65\x7c\xe3\xff\x1e\x24\xd6\x1e\x24\x1c\xbf\x1e\x24\x68\xff\xff"
	"\x11\x11\x97\xaa\x05\xff\x65\xaa\x66\x1c\x87\x1e\x06\xa0\x7e\x1c"
	"\xff\x1e\x20\x1c\xe3\x1e\x20\x70\xd6\x0a\xbf\x68\x01\xff\x65\xd6"
	"\x66\x7c\xaa\xbf\x1e\x20\xa0\x1e\x20\x1c\x8f\x1e\x20\x70\xff\x0a"
	"\xff\x68\x0d\xa0\x69\xff\x65\xbf\x65\x68\xa0\x1d\x68\xa0\x69\xff"
	"\x64\x01\x89\x65\x68\x11\x68\xaa\x69\xff\x66\xca\x7c\x3f\x3f\x3e"
	"\x68\x11\x68\xaa\x69\xff\x66\xca\x7c\x3c\x68\x11\x68\xaa\x69\xff"
	"\x66\xca\x7c\x3c\x68\x11\x68\xaa\x69\xff\x66\x7c\xbf\x3c\x68\x11"
	"\x68\xbf\x69\xa0\x6a\x7c\xf1\x3f\x3f\x3e\x70\x11\x70\x8f\x71\xbf"
	"\x6a\x7c\x8f\x3f\x3f\x3e\x70\x15\x70\xa0\x71\xf1\x6a\x7c\xaa\x3f"
	"\x3f\x3e\x70\x15\x70\xb4\x71\x8f\x72\x7c\xca\xff\x3f\x3f\x3e\x70"
	"\x15\xaa\x73\xff\x71\xaa\x73\x7c\xff\x8a\x5c\x68\x09\x64\xff\x65"
	"\xd6\x66\x7c\xbf\xa0\x3f\x3f\x3e\x68\x09\xff\x65\xbf\x65\x09\x68"
	"\xa0\x69\xff\x65\xbf\x65\x09\x68\xa0\x69\xff\x65\xbf\x65\x09\x7c"
	"\xbf\x8f\x3f\x3f\x3f\x3f\x3e\x6b\x1f\x64\xf1\x12\x34\x97\x3e\x7c"
	"\xd6\x12\x34\x8f\x64\x3e\xf1\x12\x34\xff\x3e\x7c\xff\x09\x09\x11"
	"\x11\x11\x11\x64\xff\xf1\x3e\x68\x8f\x0a\x30\xe3\x3e\x7c\xa0\x0a"
	"\x30\xd6\x68\x3e\xaa\x0a\x30\x8b\x3d\xa0\x69\xff\x65\xd6\x67\xff"
	"\x8f\x15\x64\xd6\x65\xa0\x7e\x1c\xff\x1e\x30\x1c\xf1\x1e\x30\x70"
	"\xa0\xa0\x15\x15\x68\xa0\xbf\x11\x64\xff\x65\xd6\x66\x7c\xaa\xa0"
	"\x1e\x12\x69\xff\x65\xd6\xa0\x1e\x7c\xa0\x11\x11\x11\x11\x68\xa0"
	"\x8f\x1d\x64\xff\x65\xd6\x8c\x2d\x68\x09\xff\x65\xd6\x66\x7c\xbf"
	"\xa0\x3c\x68\x09\xff\x65\xbf\x65\x09\x7c\xa0\x3f\x3f\x3e\x68\x09"
	"\xff\x65\xbf\x65\x09\x7c\xaa\xff\x3f\x3f\x3e\x68\x09\x64\xff\x65"
	"\xaa\x66\x7c\xa0\xa0\x8d\x25\x68\x09\x64\xff\x65\xd6\x66\x7c\xbf"
	"\xa0\x3f\x3f\x3e\x68\x09\xff\x65\xbf\x65\x09\x68\xa0\x69\xff\x65"
	"\xbf\x65\x09\x68\xa0\x69\xff\x65\xbf\x65\x09\x7c\x8e\x54\x64\xbf"
	"\x65\x69\x68\xa0\x69\x64\xbf\xff\x1d\xbf\x65\x68\x01\xa0\x69\xff"
	"\x65\xbf\x65\x7c\xff\xf1\x1e\x20\xa0\x1e\x24\x1c\xbf\x1e\x24\x1c"
	"\xff\x1e\x26\x08\xa0\x28\x8f\x1e\x64\x12\x34\x08\xbf\x2a\x7c\xd6"
	"\x97\x12\x34\x64\xbf\x2a\x8f\xf1\x12\x34\xbf\x2a\xff\xff\x7d\x09"
	"\x11\x11\x11\x11\x64\xff\xbf\x2a\xf1\x8f\x6a\x30\xbf\x2a\xe3\xa0"
	"\x7e\x30\x90\x78\xbf\x16\x64\xbf\x65\x15\x15\x15\x68\xff\xa0\x12"
	"\x64\xbf\x67\x11\x68\xff\xbf\x16\x64\xbf\x65\x15\x15\x15\x68\xff"
	"\x97\x12\x64\xd6\x67\x11\x68\xf1\xbf\x16\x64\xd6\x67\x15\x68\xff"
	"\x97\x12\x64\xd6\x67\x11\x68\xf1\xbf\x16\x64\xd6\x67\x15\x70\x8f"
	"\x8f\x11\x11\xe3\x67\x11\x70\x8f\xbf\x16\x64\xe3\x67\x15\x70\x8f"
	"\x8f\x11\x11\xe3\x67\x11\x70\x8f\xbf\x16\x64\xe3\x67\x15\x70\x8f"
	"\x8f\x11\x11\xf1\x67\x11\x70\x8f\xbf\x16\x64\xf1\x67\x15\x70\x8f"
	"\x8f\x11\x11\xf1\x67\x11\x68\xff\xbf\x16\x64\xf1\x91\x78\x0a\xff"
	"\x7f\x09\xbf\x64\x12\xa0\x7f\x11\xff\x68\x0a\x8f\x7f\x09\xbf\x68"
	"\x12\xaa\x7f\x11\xff\x68\x0a\xa0\x7f\x09\xbf\x68\x12\xbf\x7d\x11"
	"\x11\x11\x8f\xbf\x6a\xaa\x7f\x11\xbf\x6a\x7c\xca\x7f\x11\x8f\x6a"
	"\x7c\xaa\x7f\x11\xbf\x6a\x7c\xa0\x7f\x11\xa0\xa0\x69\x11\x64\xbf"
	"\x67\x11\x68\xa0\xbf\x16\x64\xbf\x65\x15\x15\x15\x68\xa0\xa0\x11"
	"\x11\xbf\x67\x11\x68\xa0\xbf\x16\x64\xbf\x65\x15\x15\x15\x68\xaa"
	"\xa0\x12\x64\xbf\x67\x11\x68\xbf\xbf\x15\x15\x65\x15\x15\x15\x68"
	"\xa0\xd6\x12\xbf\x67\x11\x92\x78\x20\x3f\x1d\x70\x12\x87\xca\x06"
	"\x7c\x8f\x3f\x1d\x24\xbf\x3f\x1d\x70\x16\xbf\xa0\x06\x7c\x87\xaa"
	"\x3f\x1d\x24\xa0\x3f\x1d\x70\x16\x68\xbf\xff\x06\x7c\xd6\xca\x3f"
	"\x1d\x24\x1c\x8f\x3f\x1d\x68\x16\xbf\xf1\x06\x7c\x97\xff\x3f\x1d"
	"\x24\xf1\x3f\x1d\x68\x12\x8f\x8f\x09\x09\x7c\xa0\xe3\x3f\x1d\x28"
	"\x1c\xd6\x3f\x1d\x64\x12\xd6\xaa\x0a\x7c\xb4\xbf\x3f\x1d\x28\xd6"
	"\x3f\x1d\x64\x16\xaa\x0a\x7c\xf1\xe3\x3f\x1d\x28\x1c\xaa\x3f\x1d"
	"\x60\x0a\xd6\xff\x0a\x7c\xf1\x8f\x3f\x1d\x30\xa0\x3f\x1d\x68\x11"
	"\x93\x6e\xbf\x68\x2a\xaa\xd6\x0a\x30\x68\x8f\x6b\x13\x7c\xf1\x8f"
	"\x0a\x30\xff\x68\x3e\xd6\x64\x0a\x30\x08\xaa\x2a\x7c\xbf\x87\x12"
	"\x34\x64\xaa\x2a\xff\xd6\x0a\x30\xaa\x2a\xf1\xf1\x7d\x09\x11\x11"
	"\x11\x11\x64\xf1\xaa\x2a\xd6\xff\x0a\x30\xaa\x2a\xca\x8f\x7e\x30"
	"\xaa\x68\x2a\xa0\xbf\x0a\x30\x08\xff\x2a\xd6\xff\x7e\x30\xf1\x64"
	"\x3e\xbf\x0a\x30\xa0\x2a\xff\xd6\x7e\x30\xa0\x64\x2a\xf1\x8f\x12"
	"\x34\x2a\xf1\xbf\x7e\x30\x8f\x64\x2a\xaa\xd6\x0a\x30\x08\x8f\x2a"
	"\x94\x67\xaa\x7f\x11\x64\x0a\x7c\xbf\x7d\x09\x09\x09\x64\x11\x11"
	"\xd6\x7f\x11\x64\x0a\x7c\xf1\x7f\x09\x64\x12\x7c\xff\x7f\x11\x64"
	"\x0a\x7f\x09\x64\x12\x7f\x11\x64\x0a\x7f\x09\x64\x12\x7f\x11\xd6"
	"\x64\x0a\xf1\x7f\x09\xbf\x64\x12\xff\x7f\x11\xd6\x64\x0a\xf1\x7f"
	"\x09\xbf\x64\x12\x8f\x7f\x11\xe3\x68\x0a\x7f\x09\x68\xbf\x12\x7f"
	"\x11\xe3\x68\x0a\x7f\x09\x68\xbf\x12\x7f\x11\xf1\x68\x0a\xff\x7f"
	"\x09\xbf\x64\x12\x8f\x7f\x11\xf1\x68\x95\x63\x7c\xa0\x12\x34\x8f"
	"\x68\x3e\xaa\x12\x34\x87\x3e\x7c\xbf\x12\x34\xff\x68\x3e\xca\x0a"
	"\x30\xf1\x3e\x7c\x8f\x0a\x30\xe3\x68\x3e\xa0\x0a\x30\xca\x3e\x7c"
	"\xaa\x0a\x30\xbf\x68\x3e\xbf\x09\x09\x11\x11\x11\x11\xa0\xbf\x3e"
	"\xff\x7c\x12\x34\x64\x8f\x3e\x10\xf1\x12\x34\xff\x3e\x7c\xff\x09"
	"\x09\x11\x11\x11\x11\x64\xff\xf1\x3e\x68\x8f\x0a\x30\xe3\x3e\x7c"
	"\xa0\x0a\x30\xd6\x68\x3e\xd6\x64\x09\x09\x11\x11\x11\x11\x96\x52"
	"\xf1\x3e\x7c\x8f\x0a\x30\xff\x68\x3e\xd6\x64\x0a\x30\x1c\x87\x3e"
	"\x7c\xbf\x12\x34\xff\x64\x3e\xd6\x0a\x30\xf1\x3e\x7c\xf1\x09\x09"
	"\x11\x11\x11\x11\x64\xf1\xd6\x3e\x08\xff\x0a\x30\xca\x3e\x7c\x8f"
	"\x0a\x30\xbf\x68\x3e\xa0\x0a\x30\xd6\x3e\x7c\xff\x0a\x30\xf1\x64"
	"\x3e\xbf\x0a\x30\xff\x3e\x7c\xd6\x0a\x30\x8f\x64\x3e\xf1\x12\x34"
	"\xf1\xf1\x98\x48\x87\x3c\x30\xbf\x3f\x1d\x64\x06\x60\xe3\xff\x12"
	"\x7c\xca\xaa\x3f\x1d\x30\x1c\xff\x3f\x1d\x64\x06\xa0\xbf\x12\x7c"
	"\xca\xaa\x3f\x1d\x30\xa0\x3f\x1d\x64\x0a\xbf\x12\x7c\x97\xff\x3f"
	"\x1d\x30\x1c\xbf\x3f\x1d\x64\x0a\xf1\x8f\x12\x7c\x97\xff\x3f\x1d"
	"\x28\xbf\x3f\x1d\x68\x0a\x8f\xf1\x0a\x7c\xff\xff\x99\x06\xa0\x69"
	"\xff\x65\xbf\x65\x9a\x44\x67\x15\x70\xa0\xff\x0a\x64\xff\x65\x09"
	"\x09\x09\x70\x8f\xbf\x16\x64\xff\x67\x15\x70\xaa\xff\x0a\x64\xff"
	"\x65\x09\x09\x09\x70\xa0\xbf\x16\x64\xff\x67\x15\x68\xbf\xff\x0a"
	"\x73\x09\x68\xa0\xbf\x16\x73\x15\x64\xff\xff\x09\x09\x69\x09\x09"
	"\x09\x64\xbf\xbf\x11\x11\x69\x11\x11\x11\x9b\x3f\x09\x09\x09\x09"
	"\xff\xbf\x3f\x1d\x64\x0a\xf1\x8f\x12\x7c\xca\xa0\x3f\x1d\x30\xf1"
	"\x3f\x1d\x64\x06\xbf\xaa\x12\x7c\xb4\xbf\x3f\x1d\x30\xff\x3f\x1d"
	"\x64\x06\xaa\xca\x12\x7c\x87\xe3\x3f\x1d\x30\xaa\x3f\x1d\x64\x06"
	"\x60\xff\xff\x11\x11\x7c\xca\xaa\x3f\x3f\x3e\x9c\x08\x68\x09\xff"
	"\x65\xd6\x66\xa0\x7c\x9d\x38\x7c\xd6\x12\x34\xa0\x68\x3e\xff\x64"
	"\x12\x34\x1c\xaa\x3e\x7c\xf1\x12\x34\xa0\x64\x3e\xff\x12\x34\x8f"
	"\x3e\x7c\x8f\x11\x11\x15\x15\x15\x15\x68\x8f\x87\x3e\x10\xa0\x12"
	"\x34\xff\x3e\x7c\xaa\x0a\x30\xf1\x68\x3e\xbf\x0a\x30\xbf\xbf\x9e"
	"\x04\xff\x65\xd6\x66\x9f\x1b\xf1\x12\x34\xbf\x2a\xff\xff\x7d\x09"
	"\x11\x11\x11\x11\x64\xff\xbf\x2a\xf1\x8f\x6a\x30\xbf\x2a\xe3\xa0"
	"\x7e\x30\xa1\x10\x1e\x20\xa0\x1e\x24\x1c\xbf\x1e\x24\x1c\xff\x1e"
	"\x26\x08\xa0\x28\xa2\x0f\x64\xbf\x65\x69\x68\xa0\x69\x64\xbf\xff"
	"\x1d\xbf\x65\x68\x01\xa3\x09\xbf\x16\x64\xbf\x65\x15\x15\x15\x68"
	"\xa4\x03\xff\x65\xd6\xa5\x05\x09\x11\x11\x11\x11\xa6\x03\x11\x11"
	"\x11\xa7\x0d\x0a\x7f\x09\x64\x12\x7f\x11\x64\x0a\x7f\x09\x64\x12"
	"\xa8\x16\x8f\x7f\x1f\x66\xff\x62\xe3\x62\xd6\x11\x11\x15\x15\x15"
	"\x15\xa0\xd6\x3f\x1d\x7c\xa0\x7d\xa9\x11\xd6\x69\xf1\x7e\x1c\xaa"
	"\x3c\x69\xd6\x69\xf1\x7e\x12\x69\xd6\x69\x7c\xab\x07\xa0\x12\x64"
	"\xbf\x67\x11\x68\xac\x04\x15\x15\x15\x68\xad\x0b\xd6\x11\x11\x15"
	"\x15\x15\x15\xa0\xd6\x3f\x1d\xae\x05\x0a\x30\xf1\x3e\x7c\xaf\x03"
	"\x68\x11\x68\xb0\x06\xd6\x68\x3e\xaa\x0a\x30\xb1\x03\x68\x09\x64"
	"\xb2\x0b\xaa\x7f\x1f\x66\xa0\x66\x8f\x0a\xff\xff\x61\xb3\x05\x3e"
	"\x7c\xaa\x0a\x30\xb5\x03\xaa\x0a\x30\xb6\x04\x8f\x8f\x11\x11\xb7"
	"\x0a\x11\x1d\x1d\xd6\x7f\x3f\x62\xbf\x62\xaa\xb8\x03\xd6\x0a\x30"
	"\xb9\x03\xa0\x0a\x30\xba\x05\x64\x3e\xbf\x0a\x30\xbb\x03\x09\x7c"
	"\xa0\xbc\x07\x8f\x7f\x1f\x66\xff\x62\xe3\xbd\x07\xf1\xbf\x7e\x30"
	"\x8f\x64\x2a\xbe\x03\x8f\x0a\x30\xc0\x03\x0a\x30\xd6\xc1\x03\x09"
	"\x09\x09\xc2\x03\xbf\x0a\x30\xc3\x03\xaa\x3f\x1d\xc4\x05\x7e\x30"
	"\x8f\x64\x2a\xc5\x06\x2a\x7c\xbf\x87\x12\x34\xc6\x04\x34\x8f\x64"
	"\x3e\xc7\x03\xff\x0a\x30\xc8\x06\xff\x12\x34\xd6\x2a\x7c\xc9\x03"
	"\x12\x34\x64\xcb\x03\xa0\x15\x15\xcc\x03\x0a\x30\xaa\xcd\x03\xff"
	"\x64\x3e\xce\x05\x0a\x30\x64\xf1\x26\xcf\x04\x8f\x6b\x13\x7c\xd0"
	"\x03\x3e\x7c\xbf\xd1\x03\x7c\xff\xd6\xd2\x03\x8f\x6b\x13\xd3\x03"
	"\x64\xff\x67\xd4\x03\x0a\x30\x68\xd5\x03\x12\x34\x08\xd7\x04\xf1"
	"\x26\x7c\xaa\xd8\x03\x26\x7c\xaa\xd9\x04\xa0\x06\xa0\xa0\xda\x03"
	"\xaa\x12\x34\xdb\x03\xbf\x68\x2a\xdc\x03\x64\x8f\x3e\xdd\x03\x8f"
	"\x3e\x10\xde\x03\x68\xa0\xa0\xdf\x03\x1e\x68\x11\xe0\x03\x64\xff"
	"\x26\xe1\x03\x64\x3e\xaa\xe2\x03\x64\xf1\x26\xe4\x03\xca\x7f\x3f"
	"\xe5\x03\x2a\xd6\xaa"
	;

static const uint8_t *end = dict + sizeof(dict);
static const int size = 6424;
static const uint8_t bits[] = {0x7e, 0x7f, 0x7f, 0xff, 0xfe, 0xfb, 0xef, 0x7f, 0xff, 0xfb, 0xbf, 0xff, 0x37,0,0,0};

int main(void) {
	uint8_t oct[2]={0}, freq[2]={0}, out[2]={0}, cnt[2]={0}, delay=1, n;
	
	uint8_t b;
	uint32_t t=0, p=0, u=0;
	uint8_t dc=0;
	uint8_t *dp, *ptr, *pp=mout;
#ifdef TILDA
	volatile uint16_t *odr = (volatile uint16_t *)0x48000C14;
	volatile uint16_t *timsr = (volatile uint16_t *)0x40012C10;
#endif
	const int8_t lookup[] = { 0, 1, 3, 0, 7, 15, 31, -1 };
#if 0
	uint8_t bits[16]={0};
	for(dp=dict;dp<end;dp+=dp[1]+2) {
	  if (*dp & 0x80)
	    bits[(*dp>>3)&15]|=1<<(*dp&7);
	  fprintf(stderr, "setting %x, bits[0]=%08x\n",*dp);
	}
#endif
	for(;;t++) {
		for (n=0; n<2; n++) {
		  if ((oct[n]&7)!=7 && !(t & lookup[oct[n]&7]) && !--cnt[n]) {
			  cnt[n] = (freq[n] | (((oct[n] & 3) == 3) ? 0 : 0x80))>>1;
				out[n] ^= 1;
			}
		}
		if (!delay || (!(t & 4095) && !--delay)) {
		  	if (p==size)
		    		break;
			if (dc) {
			  b = *dp++; dc--;
			} else {
			  b=*pp++;
			  if ((b & 0x80) && bits[(b>>3)-16]&(1<<(b&7))) {
			    for(dp=dict;*dp!=b;dp+=dp[1]+2);
			    //fprintf(stderr,"b=%02x dict, len=%d\n", dp[1]);
			    dc=dp[1]-1;dp+=2;
			    b=*dp++;
			  }
			}
			//putchar(b);
		  	if (b & 0x80) {
				freq[p&1] = b & 0x7f;
			} else { /* 0coooodd */
				oct[b>>6] = (b>>2) & 15;
				if (((b>>2) & 7)==7) out[b>>6]=0;
		  
				delay = b & 3;
			}
			if (!(b>>6)) delay |= (oct[0] & 8) >> 1;
			p++;
		}
#ifdef TILDA		
		while (!(*timsr &1));
		*timsr = 0;
		*odr = (*odr & ~(1<<12)) | (out[t&1]<<12);
#else
		putchar(out[t&1]<<7);
#endif
	}
}
