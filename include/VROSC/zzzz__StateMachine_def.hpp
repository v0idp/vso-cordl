#pragma once
// IWYU pragma private; include "VROSC/StateMachine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StateMachine)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace VROSC {
class IState;
}
namespace VROSC {
class StateMachine_Transition;
}
// Forward declare root types
namespace VROSC {
class StateMachine;
}
namespace VROSC {
class StateMachine_Transition;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::StateMachine);
MARK_REF_PTR_T(::VROSC::StateMachine_Transition);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.StateMachine/Transition
class CORDL_TYPE StateMachine_Transition : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Condition)) ::System::Func_1<bool>*  Condition;

 __declspec(property(get=get_To)) ::VROSC::IState*  To;

/// @brief Field <Condition>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Condition_k__BackingField, put=__cordl_internal_set__Condition_k__BackingField)) ::System::Func_1<bool>*  _Condition_k__BackingField;

/// @brief Field <To>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__To_k__BackingField, put=__cordl_internal_set__To_k__BackingField)) ::VROSC::IState*  _To_k__BackingField;

static inline ::VROSC::StateMachine_Transition* New_ctor(::VROSC::IState*  to, ::System::Func_1<bool>*  condition) ;

constexpr ::System::Func_1<bool>* const& __cordl_internal_get__Condition_k__BackingField() const;

constexpr ::System::Func_1<bool>*& __cordl_internal_get__Condition_k__BackingField() ;

constexpr ::VROSC::IState* const& __cordl_internal_get__To_k__BackingField() const;

constexpr ::VROSC::IState*& __cordl_internal_get__To_k__BackingField() ;

constexpr void __cordl_internal_set__Condition_k__BackingField(::System::Func_1<bool>*  value) ;

constexpr void __cordl_internal_set__To_k__BackingField(::VROSC::IState*  value) ;

/// @brief Method .ctor, addr 0x16faf70, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::VROSC::IState*  to, ::System::Func_1<bool>*  condition) ;

/// @brief Method get_Condition, addr 0x16fb1ec, size 0x8, virtual false, abstract: false, final false
inline ::System::Func_1<bool>* get_Condition() ;

/// @brief Method get_To, addr 0x16fb1f4, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::IState* get_To() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StateMachine_Transition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StateMachine_Transition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StateMachine_Transition(StateMachine_Transition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateMachine_Transition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateMachine_Transition(StateMachine_Transition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{824};

/// @brief Field <Condition>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<bool>*  ____Condition_k__BackingField;

/// @brief Field <To>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::VROSC::IState*  ____To_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::StateMachine_Transition, ____Condition_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::StateMachine_Transition, ____To_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::StateMachine_Transition, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.StateMachine
class CORDL_TYPE StateMachine : public ::System::Object {
public:
// Declarations
using Transition = ::VROSC::StateMachine_Transition;

/// @brief Field EmptyTransitions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmptyTransitions, put=setStaticF_EmptyTransitions)) ::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*  EmptyTransitions;

/// @brief Field _anyTransitions, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__anyTransitions, put=__cordl_internal_set__anyTransitions)) ::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*  _anyTransitions;

/// @brief Field _currentState, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentState, put=__cordl_internal_set__currentState)) ::VROSC::IState*  _currentState;

/// @brief Field _currentTransitions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentTransitions, put=__cordl_internal_set__currentTransitions)) ::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*  _currentTransitions;

/// @brief Field _transitions, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__transitions, put=__cordl_internal_set__transitions)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*>*  _transitions;

/// @brief Method AddAnyTransition, addr 0x16faf9c, size 0xe4, virtual false, abstract: false, final false
inline void AddAnyTransition(::VROSC::IState*  state, ::System::Func_1<bool>*  predicate) ;

/// @brief Method AddTransition, addr 0x16fadd0, size 0x1a0, virtual false, abstract: false, final false
inline void AddTransition(::VROSC::IState*  from, ::VROSC::IState*  to, ::System::Func_1<bool>*  predicate) ;

/// @brief Method GetTransition, addr 0x16fa954, size 0x270, virtual false, abstract: false, final false
inline bool GetTransition(::ByRef<::VROSC::StateMachine_Transition*>  transition) ;

/// @brief Method IsState, addr 0x16fa808, size 0x10, virtual false, abstract: false, final false
inline bool IsState(::VROSC::IState*  state) ;

static inline ::VROSC::StateMachine* New_ctor() ;

/// @brief Method SetState, addr 0x16fabc4, size 0x20c, virtual false, abstract: false, final false
inline void SetState(::VROSC::IState*  state, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method Tick, addr 0x16fa818, size 0x13c, virtual false, abstract: false, final false
inline void Tick() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>* const& __cordl_internal_get__anyTransitions() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*& __cordl_internal_get__anyTransitions() ;

constexpr ::VROSC::IState* const& __cordl_internal_get__currentState() const;

constexpr ::VROSC::IState*& __cordl_internal_get__currentState() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>* const& __cordl_internal_get__currentTransitions() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*& __cordl_internal_get__currentTransitions() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*>* const& __cordl_internal_get__transitions() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*>*& __cordl_internal_get__transitions() ;

constexpr void __cordl_internal_set__anyTransitions(::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*  value) ;

constexpr void __cordl_internal_set__currentState(::VROSC::IState*  value) ;

constexpr void __cordl_internal_set__currentTransitions(::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*  value) ;

constexpr void __cordl_internal_set__transitions(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*>*  value) ;

/// @brief Method .ctor, addr 0x16fb080, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>* getStaticF_EmptyTransitions() ;

static inline void setStaticF_EmptyTransitions(::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StateMachine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StateMachine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StateMachine(StateMachine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateMachine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateMachine(StateMachine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{825};

/// @brief Field _currentState, offset: 0x10, size: 0x8, def value: None
 ::VROSC::IState*  ____currentState;

/// @brief Field _transitions, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*>*  ____transitions;

/// @brief Field _currentTransitions, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*  ____currentTransitions;

/// @brief Field _anyTransitions, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*  ____anyTransitions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::StateMachine, ____currentState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::StateMachine, ____transitions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::StateMachine, ____currentTransitions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::StateMachine, ____anyTransitions) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::StateMachine, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::StateMachine);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::StateMachine*, "VROSC", "StateMachine");
NEED_NO_BOX(::VROSC::StateMachine_Transition);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::StateMachine_Transition*, "VROSC", "StateMachine/Transition");
