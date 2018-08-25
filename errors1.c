#include "errors.h"

/**
 * filenotfound - constructs the error message for file not found
 * @sev: ptr to the shell environment variable
 * Return: the constructed error message
 */
char *filenotfound(sev_t *sev)
{
	char *errmsg = NULL;

	sev->error = -1;
	errmsg = _strcat(_getenv("_", sev), COLON, &sev->mem);
	errmsg = _strcat(errmsg, SPACE, &sev->mem);
	errmsg = _strcat(errmsg, _itoa(sev->log_cnt, &sev->mem), &sev->mem);
	errmsg = _strcat(errmsg, COLON, &sev->mem);
	errmsg = _strcat(errmsg, SPACE, &sev->mem);
	errmsg = _strcat(errmsg, sev->input, &sev->mem);
	errmsg = _strcat(errmsg, COLON, &sev->mem);
	errmsg = _strcat(errmsg, SPACE, &sev->mem);
	errmsg = _strcat(errmsg, "not found", &sev->mem);
	errmsg = _strcat(errmsg, "\n", &sev->mem);
	sev->errmsg = errmsg;

	return (errmsg);
}

/**
 * illegalnum - constructs the error message for the illegal exit number
 * @sev: ptr to the shell environment variable
 * Return: the constructed error message
char *illegalnum(sev_t *sev) */
char *illegalnum(sev_t *sev)
{
	char *errmsg = NULL;

	errmsg = _strcat(_getenv("_", sev), COLON, &sev->mem);
        errmsg = _strcat(errmsg, SPACE, &sev->mem);
        errmsg = _strcat(errmsg, _itoa(sev->log_cnt, &sev->mem), &sev->mem);
        errmsg = _strcat(errmsg, COLON, &sev->mem);
        errmsg = _strcat(errmsg, SPACE, &sev->mem);
        errmsg = _strcat(errmsg, sev->input, &sev->mem);
        errmsg = _strcat(errmsg, COLON, &sev->mem);
        errmsg = _strcat(errmsg, SPACE, &sev->mem);
        errmsg = _strcat(errmsg, "Illegal number: ", &sev->mem);
	errmsg = _strcat(errmsg, sev->p_input[1], &sev->mem);
        errmsg = _strcat(errmsg, "\n", &sev->mem);
        sev->errmsg = errmsg;

	return (errmsg);
}
