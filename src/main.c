#include <vanilla/cpu.h>
#include <vanilla/std.h>

#include "common.h"

ctype_status
main(int argc, char **argv)
{
	char *s;

	c_std_setprogname(argv[0]);
	s = c_gen_basename(c_std_getprogname());

	if (!CSTRCMP("tohru", s))
		return tohru_main(argc, argv);
	else if (!CSTRCMP("tohru-ar", s))
		return ar_main(argc, argv);
	else if (!CSTRCMP("tohru-cksum", s))
		return cksum_main(argc, argv);

	return 1;
}
