#pragma once
// IWYU pragma private; include "VROSC/RadioButton.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__RadioButton_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__RadioButtonParent_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::RadioButton.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::RadioButton::*)()>(&::VROSC::RadioButton::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1724e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RadioButton*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::RadioButton.GetRadioButtonParentRecursive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::RadioButton::*)(::UnityEngine::Transform*)>(&::VROSC::RadioButton::GetRadioButtonParentRecursive)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1724e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RadioButton*>::get(),
                        "GetRadioButtonParentRecursive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::RadioButton.ReceiveSignal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::RadioButton::*)(::VROSC::Signal*)>(&::VROSC::RadioButton::ReceiveSignal)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x172501c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RadioButton*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RadioButton*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::RadioButton.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::RadioButton::*)()>(&::VROSC::RadioButton::Update)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x17251c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RadioButton*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::RadioButton.SetActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::RadioButton::*)(bool)>(&::VROSC::RadioButton::SetActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x17251ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RadioButton*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::RadioButton._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::RadioButton::*)()>(&::VROSC::RadioButton::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x172520c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RadioButton*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::RadioButtonParent>& VROSC::RadioButton::__cordl_internal_get__radioButtonParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radioButtonParent;
}
constexpr ::UnityW<::VROSC::RadioButtonParent> const& VROSC::RadioButton::__cordl_internal_get__radioButtonParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radioButtonParent;
}
constexpr void VROSC::RadioButton::__cordl_internal_set__radioButtonParent(::UnityW<::VROSC::RadioButtonParent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____radioButtonParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::RadioButton::__cordl_internal_get__active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active;
}
constexpr bool const& VROSC::RadioButton::__cordl_internal_get__active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active;
}
constexpr void VROSC::RadioButton::__cordl_internal_set__active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____active = value;
}
constexpr ::VROSC::Signal*& VROSC::RadioButton::__cordl_internal_get__signal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____signal;
}
constexpr ::VROSC::Signal* const& VROSC::RadioButton::__cordl_internal_get__signal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____signal;
}
constexpr void VROSC::RadioButton::__cordl_internal_set__signal(::VROSC::Signal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::RadioButton::__cordl_internal_get__signalBeganThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____signalBeganThisFrame;
}
constexpr bool const& VROSC::RadioButton::__cordl_internal_get__signalBeganThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____signalBeganThisFrame;
}
constexpr void VROSC::RadioButton::__cordl_internal_set__signalBeganThisFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____signalBeganThisFrame = value;
}
inline void VROSC::RadioButton::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RadioButton*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::RadioButton::GetRadioButtonParentRecursive(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RadioButton*>::get(),
                        "GetRadioButtonParentRecursive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline void VROSC::RadioButton::ReceiveSignal(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RadioButton*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::RadioButton::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RadioButton*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::RadioButton::SetActive(bool  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RadioButton*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void VROSC::RadioButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RadioButton*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::RadioButton* VROSC::RadioButton::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::RadioButton*>());
}
// Ctor Parameters []
constexpr ::VROSC::RadioButton::RadioButton()   {
}
