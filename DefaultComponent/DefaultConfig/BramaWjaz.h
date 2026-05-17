/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-01
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: BramaWjaz
//!	Generated Date	: Fri, 15, May 2026  
	File Path	: DefaultComponent/DefaultConfig/BramaWjaz.h
*********************************************************************/

#ifndef BramaWjaz_H
#define BramaWjaz_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## link itsOdbiornik
class Odbiornik;

//#[ ignore
#define OMAnim_Default_BramaWjaz_get_pozycja_ARGS_DECLARATION

#define OMAnim_Default_BramaWjaz_kierunek_ARGS_DECLARATION

#define OMAnim_Default_BramaWjaz_message_0_ARGS_DECLARATION

#define OMAnim_Default_BramaWjaz_otworz_ARGS_DECLARATION

#define OMAnim_Default_BramaWjaz_set_pozycja_int_ARGS_DECLARATION int new_pozycja;

#define OMAnim_Default_BramaWjaz_zamknij_ARGS_DECLARATION
//#]

//## package Default

//## class BramaWjaz
class BramaWjaz : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedBramaWjaz;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    BramaWjaz(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~BramaWjaz();
    
    ////    Operations    ////
    
    //## operation get_pozycja()
    int get_pozycja();
    
    //## operation kierunek()
    void kierunek();
    
    //## operation message_0()
    void message_0();
    
    //## operation otworz()
    void otworz();
    
    //## operation set_pozycja(int)
    void set_pozycja(int new_pozycja);
    
    //## operation zamknij()
    void zamknij();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getPozycja() const;
    
    //## auto_generated
    void setPozycja(int p_pozycja);
    
    //## auto_generated
    Odbiornik* getItsOdbiornik() const;
    
    //## auto_generated
    void setItsOdbiornik(Odbiornik* p_Odbiornik);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int pozycja;		//## attribute pozycja
    
    ////    Relations and components    ////
    
    Odbiornik* itsOdbiornik;		//## link itsOdbiornik
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsOdbiornik(Odbiornik* p_Odbiornik);
    
    //## auto_generated
    void _setItsOdbiornik(Odbiornik* p_Odbiornik);
    
    //## auto_generated
    void _clearItsOdbiornik();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    ////    Framework    ////

protected :

//#[ ignore
    enum BramaWjaz_Enum {
        OMNonState = 0
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(Default_BramaWjaz_get_pozycja)

DECLARE_OPERATION_CLASS(Default_BramaWjaz_kierunek)

DECLARE_OPERATION_CLASS(Default_BramaWjaz_message_0)

DECLARE_OPERATION_CLASS(Default_BramaWjaz_otworz)

DECLARE_OPERATION_CLASS(Default_BramaWjaz_set_pozycja_int)

DECLARE_OPERATION_CLASS(Default_BramaWjaz_zamknij)

//#[ ignore
class OMAnimatedBramaWjaz : virtual public AOMInstance {
    DECLARE_REACTIVE_META(BramaWjaz, OMAnimatedBramaWjaz)
    
    DECLARE_META_OP(Default_BramaWjaz_get_pozycja)
    
    DECLARE_META_OP(Default_BramaWjaz_kierunek)
    
    DECLARE_META_OP(Default_BramaWjaz_message_0)
    
    DECLARE_META_OP(Default_BramaWjaz_otworz)
    
    DECLARE_META_OP(Default_BramaWjaz_set_pozycja_int)
    
    DECLARE_META_OP(Default_BramaWjaz_zamknij)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool BramaWjaz::rootState_IN() const {
    return true;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/BramaWjaz.h
*********************************************************************/
