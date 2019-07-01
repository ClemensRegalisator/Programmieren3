#ifndef TEXTFUN_H
#define TEXTFUN_H

typedef struct _listEle{
    char suchwort[25];
    char ersetzungswort[25];
    struct _listEle *next;
    
    
}*listEle;

static listEle wordlist = NULL;

extern void addPair(const char *such, const char *ersatz);
extern void clearList(void);
extern char *find(const char *find);
extern int replaceAll (char *s );


#endif
