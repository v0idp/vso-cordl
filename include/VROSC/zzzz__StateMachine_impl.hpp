#pragma once
// IWYU pragma private; include "VROSC/StateMachine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__StateMachine_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
#include "VROSC/zzzz__StateMachine_def.hpp"
//  Writing Method size for method: ::VROSC::StateMachine_Transition.get_Condition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<bool>* (::VROSC::StateMachine_Transition::*)()>(&::VROSC::StateMachine_Transition::get_Condition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16fb1ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine_Transition*>::get(),
                        "get_Condition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::StateMachine_Transition.get_To
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::IState* (::VROSC::StateMachine_Transition::*)()>(&::VROSC::StateMachine_Transition::get_To)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16fb1f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine_Transition*>::get(),
                        "get_To",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::StateMachine_Transition._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::StateMachine_Transition::*)(::VROSC::IState*, ::System::Func_1<bool>*)>(&::VROSC::StateMachine_Transition::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x16faf70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine_Transition*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::IState*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<bool>*& VROSC::StateMachine_Transition::__cordl_internal_get__Condition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Condition_k__BackingField;
}
constexpr ::System::Func_1<bool>* const& VROSC::StateMachine_Transition::__cordl_internal_get__Condition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Condition_k__BackingField;
}
constexpr void VROSC::StateMachine_Transition::__cordl_internal_set__Condition_k__BackingField(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Condition_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::IState*& VROSC::StateMachine_Transition::__cordl_internal_get__To_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____To_k__BackingField;
}
constexpr ::VROSC::IState* const& VROSC::StateMachine_Transition::__cordl_internal_get__To_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____To_k__BackingField;
}
constexpr void VROSC::StateMachine_Transition::__cordl_internal_set__To_k__BackingField(::VROSC::IState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____To_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Func_1<bool>* VROSC::StateMachine_Transition::get_Condition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine_Transition*>::get(),
                        "get_Condition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<bool>*, false>(this, ___internal_method);
}
inline ::VROSC::IState* VROSC::StateMachine_Transition::get_To()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine_Transition*>::get(),
                        "get_To",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::IState*, false>(this, ___internal_method);
}
inline void VROSC::StateMachine_Transition::_ctor(::VROSC::IState*  to, ::System::Func_1<bool>*  condition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine_Transition*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::IState*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, to, condition);
}
inline ::VROSC::StateMachine_Transition* VROSC::StateMachine_Transition::New_ctor(::VROSC::IState*  to, ::System::Func_1<bool>*  condition)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::StateMachine_Transition*>(to, condition));
}
// Ctor Parameters []
constexpr ::VROSC::StateMachine_Transition::StateMachine_Transition()   {
}
//  Writing Method size for method: ::VROSC::StateMachine.IsState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::StateMachine::*)(::VROSC::IState*)>(&::VROSC::StateMachine::IsState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x16fa808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine*>::get(),
                        "IsState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::IState*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::StateMachine.Tick
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::StateMachine::*)()>(&::VROSC::StateMachine::Tick)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x16fa818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine*>::get(),
                        "Tick",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::StateMachine.SetState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::StateMachine::*)(::VROSC::IState*, ::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::VROSC::StateMachine::SetState)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x16fabc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine*>::get(),
                        "SetState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::IState*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::StateMachine.AddTransition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::StateMachine::*)(::VROSC::IState*, ::VROSC::IState*, ::System::Func_1<bool>*)>(&::VROSC::StateMachine::AddTransition)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x16fadd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine*>::get(),
                        "AddTransition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::IState*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::IState*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::StateMachine.AddAnyTransition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::StateMachine::*)(::VROSC::IState*, ::System::Func_1<bool>*)>(&::VROSC::StateMachine::AddAnyTransition)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x16faf9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine*>::get(),
                        "AddAnyTransition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::IState*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::StateMachine.GetTransition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::StateMachine::*)(::ByRef<::VROSC::StateMachine_Transition*>)>(&::VROSC::StateMachine::GetTransition)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x16fa954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine*>::get(),
                        "GetTransition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::VROSC::StateMachine_Transition*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::StateMachine._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::StateMachine::*)()>(&::VROSC::StateMachine::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x16fb080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::IState*& VROSC::StateMachine::__cordl_internal_get__currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentState;
}
constexpr ::VROSC::IState* const& VROSC::StateMachine::__cordl_internal_get__currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentState;
}
constexpr void VROSC::StateMachine::__cordl_internal_set__currentState(::VROSC::IState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*>*& VROSC::StateMachine::__cordl_internal_get__transitions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitions;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*>* const& VROSC::StateMachine::__cordl_internal_get__transitions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitions;
}
constexpr void VROSC::StateMachine::__cordl_internal_set__transitions(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*& VROSC::StateMachine::__cordl_internal_get__currentTransitions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTransitions;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>* const& VROSC::StateMachine::__cordl_internal_get__currentTransitions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTransitions;
}
constexpr void VROSC::StateMachine::__cordl_internal_set__currentTransitions(::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentTransitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*& VROSC::StateMachine::__cordl_internal_get__anyTransitions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anyTransitions;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>* const& VROSC::StateMachine::__cordl_internal_get__anyTransitions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anyTransitions;
}
constexpr void VROSC::StateMachine::__cordl_internal_set__anyTransitions(::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____anyTransitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::StateMachine::setStaticF_EmptyTransitions(::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*, "EmptyTransitions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine*>::get>(std::forward<::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*>(value));
}
inline ::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>* VROSC::StateMachine::getStaticF_EmptyTransitions()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::VROSC::StateMachine_Transition*>*, "EmptyTransitions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine*>::get>();
}
inline bool VROSC::StateMachine::IsState(::VROSC::IState*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine*>::get(),
                        "IsState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::IState*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, state);
}
inline void VROSC::StateMachine::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine*>::get(),
                        "Tick",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::StateMachine::SetState(::VROSC::IState*  state, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine*>::get(),
                        "SetState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::IState*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, values);
}
inline void VROSC::StateMachine::AddTransition(::VROSC::IState*  from, ::VROSC::IState*  to, ::System::Func_1<bool>*  predicate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine*>::get(),
                        "AddTransition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::IState*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::IState*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, from, to, predicate);
}
inline void VROSC::StateMachine::AddAnyTransition(::VROSC::IState*  state, ::System::Func_1<bool>*  predicate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine*>::get(),
                        "AddAnyTransition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::IState*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, predicate);
}
inline bool VROSC::StateMachine::GetTransition(::ByRef<::VROSC::StateMachine_Transition*>  transition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine*>::get(),
                        "GetTransition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::VROSC::StateMachine_Transition*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, transition);
}
inline void VROSC::StateMachine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StateMachine*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::StateMachine* VROSC::StateMachine::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::StateMachine*>());
}
// Ctor Parameters []
constexpr ::VROSC::StateMachine::StateMachine()   {
}
