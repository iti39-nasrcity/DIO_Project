#ifndef BIT_CLC
#define BIT_CLC

#define SET_BIT(NUM,BIT)   NUM=NUM|(1<<BIT)
#define CLR_BIT(NUM,BIT)   NUM=NUM&~(1<<BIT)
#define TOGGLE_BIT(NUM,BIT)   NUM=NUM^(1<<BIT)
#define GEt_BIT(NUM,BIT)   ((NUM&(1<<BIT))>>BIT)
#define ASSGIN_BIT(NUM,BIT,VALUE)    (VALUE>0)?(SET_BIT(NUM,BIT)):(CLR_BIT(NUM,BIT))

#define ROT_RIGHT(DATATYPE,NUM,BIT)   NUM=((NUM>>BIT)|(NUM<<(sizeof(DATATYPE)-BIT)))

#define CONC_8BIT(b0,b1,b2,b3,b4,b5,b6,b7)	    CONC_HELPER(b0,b1,b2,b3,b4,b5,b6,b7)
#define CONC_HELPER(b0,b1,b2,b3,b4,b5,b6,b7)    0b##b7##b6##b5##b4##b3##b2##b1##b1##b0                                  
                                               



#endif 

