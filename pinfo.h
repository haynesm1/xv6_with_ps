
#define PINFO_STATE_STR_MAX_LEN (16)
#define PINFO_NAME_MAX_LEN (16)

struct pinfo
{
    int pid;
    char stateStr[PINFO_NAME_MAX_LEN]; 
    char programNameStr[PINFO_NAME_MAX_LEN]; 
};
