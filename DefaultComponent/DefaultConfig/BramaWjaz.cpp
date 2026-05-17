/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-01
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: BramaWjaz
//!	Generated Date	: Fri, 15, May 2026  
	File Path	: DefaultComponent/DefaultConfig/BramaWjaz.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "BramaWjaz.h"
//## link itsOdbiornik
#include "Odbiornik.h"
//#[ ignore
#define Default_BramaWjaz_BramaWjaz_SERIALIZE OM_NO_OP

#define Default_BramaWjaz_get_pozycja_SERIALIZE OM_NO_OP

#define OMAnim_Default_BramaWjaz_get_pozycja_UNSERIALIZE_ARGS

#define OMAnim_Default_BramaWjaz_get_pozycja_SERIALIZE_RET_VAL OP_SET_RET_VAL(animRetVal)

#define Default_BramaWjaz_kierunek_SERIALIZE OM_NO_OP

#define OMAnim_Default_BramaWjaz_kierunek_UNSERIALIZE_ARGS

#define OMAnim_Default_BramaWjaz_kierunek_SERIALIZE_RET_VAL

#define Default_BramaWjaz_message_0_SERIALIZE OM_NO_OP

#define OMAnim_Default_BramaWjaz_message_0_UNSERIALIZE_ARGS

#define OMAnim_Default_BramaWjaz_message_0_SERIALIZE_RET_VAL

#define Default_BramaWjaz_otworz_SERIALIZE OM_NO_OP

#define OMAnim_Default_BramaWjaz_otworz_UNSERIALIZE_ARGS

#define OMAnim_Default_BramaWjaz_otworz_SERIALIZE_RET_VAL

#define Default_BramaWjaz_set_pozycja_SERIALIZE aomsmethod->addAttribute("new_pozycja", x2String(new_pozycja));

#define OMAnim_Default_BramaWjaz_set_pozycja_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,new_pozycja)

#define OMAnim_Default_BramaWjaz_set_pozycja_int_SERIALIZE_RET_VAL

#define Default_BramaWjaz_zamknij_SERIALIZE OM_NO_OP

#define OMAnim_Default_BramaWjaz_zamknij_UNSERIALIZE_ARGS

#define OMAnim_Default_BramaWjaz_zamknij_SERIALIZE_RET_VAL
//#]

//## package Default

//## class BramaWjaz
BramaWjaz::BramaWjaz(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(BramaWjaz, BramaWjaz(), 0, Default_BramaWjaz_BramaWjaz_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsOdbiornik = NULL;
    initStatechart();
}

BramaWjaz::~BramaWjaz() {
    NOTIFY_DESTRUCTOR(~BramaWjaz, true);
    cleanUpRelations();
}

int BramaWjaz::get_pozycja() {
    NOTIFY_OPERATION(get_pozycja, get_pozycja(), 0, Default_BramaWjaz_get_pozycja_SERIALIZE);
    //#[ operation get_pozycja()
    return this->pozycja;
    //#]
}

void BramaWjaz::kierunek() {
    NOTIFY_OPERATION(kierunek, kierunek(), 0, Default_BramaWjaz_kierunek_SERIALIZE);
    //#[ operation kierunek()
    //#]
}

void BramaWjaz::message_0() {
    NOTIFY_OPERATION(message_0, message_0(), 0, Default_BramaWjaz_message_0_SERIALIZE);
    //#[ operation message_0()
    //#]
}

void BramaWjaz::otworz() {
    NOTIFY_OPERATION(otworz, otworz(), 0, Default_BramaWjaz_otworz_SERIALIZE);
    //#[ operation otworz()
    if (this->pozycja = 1)
    {
    	std::cout << "Brama jest juz otwarta!\n";
    }
    else{
    	std::cout<<"otworzono brame!\n";
    	this->pozycja=1;
    }
    	
    //#]
}

void BramaWjaz::set_pozycja(int new_pozycja) {
    NOTIFY_OPERATION(set_pozycja, set_pozycja(int), 1, Default_BramaWjaz_set_pozycja_SERIALIZE);
    //#[ operation set_pozycja(int)
    if (new_pozycja == 1 ) this -> pozycja = 1;
    else if ( new_pozycja == -1) this ->pozycja = -1;
    
    //#]
}

void BramaWjaz::zamknij() {
    NOTIFY_OPERATION(zamknij, zamknij(), 0, Default_BramaWjaz_zamknij_SERIALIZE);
    //#[ operation zamknij()
    if (this->pozycja = -1){
    	std::cout << "Brama jest juz zamknieta!\n";
    }
    else{
    	std::cout << "Zamknieto brame!\n";
    	this->pozycja = -1;
    } 
    //#]
}

int BramaWjaz::getPozycja() const {
    return pozycja;
}

void BramaWjaz::setPozycja(int p_pozycja) {
    pozycja = p_pozycja;
}

Odbiornik* BramaWjaz::getItsOdbiornik() const {
    return itsOdbiornik;
}

void BramaWjaz::setItsOdbiornik(Odbiornik* p_Odbiornik) {
    _setItsOdbiornik(p_Odbiornik);
}

bool BramaWjaz::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void BramaWjaz::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void BramaWjaz::cleanUpRelations() {
    if(itsOdbiornik != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsOdbiornik");
            itsOdbiornik = NULL;
        }
}

void BramaWjaz::__setItsOdbiornik(Odbiornik* p_Odbiornik) {
    itsOdbiornik = p_Odbiornik;
    if(p_Odbiornik != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsOdbiornik", p_Odbiornik, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsOdbiornik");
        }
}

void BramaWjaz::_setItsOdbiornik(Odbiornik* p_Odbiornik) {
    __setItsOdbiornik(p_Odbiornik);
}

void BramaWjaz::_clearItsOdbiornik() {
    NOTIFY_RELATION_CLEARED("itsOdbiornik");
    itsOdbiornik = NULL;
}

void BramaWjaz::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
    }
}

IOxfReactive::TakeEventStatus BramaWjaz::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedBramaWjaz::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("pozycja", x2String(myReal->pozycja));
}

void OMAnimatedBramaWjaz::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsOdbiornik", false, true);
    if(myReal->itsOdbiornik)
        {
            aomsRelations->ADD_ITEM(myReal->itsOdbiornik);
        }
}

void OMAnimatedBramaWjaz::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
}
//#]

IMPLEMENT_REACTIVE_META_P(BramaWjaz, Default, Default, false, OMAnimatedBramaWjaz)

IMPLEMENT_META_OP(OMAnimatedBramaWjaz, Default_BramaWjaz_get_pozycja, "get_pozycja", FALSE, "get_pozycja()", 0)

IMPLEMENT_OP_CALL(Default_BramaWjaz_get_pozycja, BramaWjaz, get_pozycja(), int animRetVal = )

IMPLEMENT_META_OP(OMAnimatedBramaWjaz, Default_BramaWjaz_kierunek, "kierunek", FALSE, "kierunek()", 0)

IMPLEMENT_OP_CALL(Default_BramaWjaz_kierunek, BramaWjaz, kierunek(), NO_OP())

IMPLEMENT_META_OP(OMAnimatedBramaWjaz, Default_BramaWjaz_message_0, "message_0", FALSE, "message_0()", 0)

IMPLEMENT_OP_CALL(Default_BramaWjaz_message_0, BramaWjaz, message_0(), NO_OP())

IMPLEMENT_META_OP(OMAnimatedBramaWjaz, Default_BramaWjaz_otworz, "otworz", FALSE, "otworz()", 0)

IMPLEMENT_OP_CALL(Default_BramaWjaz_otworz, BramaWjaz, otworz(), NO_OP())

IMPLEMENT_META_OP(OMAnimatedBramaWjaz, Default_BramaWjaz_set_pozycja_int, "set_pozycja", FALSE, "set_pozycja(int)", 1)

IMPLEMENT_OP_CALL(Default_BramaWjaz_set_pozycja_int, BramaWjaz, set_pozycja(new_pozycja), NO_OP())

IMPLEMENT_META_OP(OMAnimatedBramaWjaz, Default_BramaWjaz_zamknij, "zamknij", FALSE, "zamknij()", 0)

IMPLEMENT_OP_CALL(Default_BramaWjaz_zamknij, BramaWjaz, zamknij(), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/BramaWjaz.cpp
*********************************************************************/
