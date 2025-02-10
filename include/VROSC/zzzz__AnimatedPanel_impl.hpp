#pragma once
// IWYU pragma private; include "VROSC/AnimatedPanel.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__AnimatedPanel_def.hpp"
#include "VROSC/zzzz__AnimatedAppear_def.hpp"
//  Writing Method size for method: ::VROSC::AnimatedPanel.get_IsAnimating
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::AnimatedPanel::*)()>(&::VROSC::AnimatedPanel::get_IsAnimating)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x17a9e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedPanel*>::get(),
                        "get_IsAnimating",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedPanel.SetActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedPanel::*)(bool)>(&::VROSC::AnimatedPanel::SetActive)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x179938c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedPanel*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedPanel.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedPanel::*)()>(&::VROSC::AnimatedPanel::Update)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x17a9e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedPanel*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedPanel.FinishClosing
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedPanel::*)()>(&::VROSC::AnimatedPanel::FinishClosing)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x17a9e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedPanel*>::get(),
                        "FinishClosing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedPanel.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedPanel::*)()>(&::VROSC::AnimatedPanel::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x17a9eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedPanel*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedPanel._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedPanel::*)()>(&::VROSC::AnimatedPanel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17a9ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedPanel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::AnimatedAppear>& VROSC::AnimatedPanel::__cordl_internal_get__animation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animation;
}
constexpr ::UnityW<::VROSC::AnimatedAppear> const& VROSC::AnimatedPanel::__cordl_internal_get__animation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animation;
}
constexpr void VROSC::AnimatedPanel::__cordl_internal_set__animation(::UnityW<::VROSC::AnimatedAppear>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::AnimatedPanel::__cordl_internal_get__isClosing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isClosing;
}
constexpr bool const& VROSC::AnimatedPanel::__cordl_internal_get__isClosing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isClosing;
}
constexpr void VROSC::AnimatedPanel::__cordl_internal_set__isClosing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isClosing = value;
}
inline bool VROSC::AnimatedPanel::get_IsAnimating()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedPanel*>::get(),
                        "get_IsAnimating",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::AnimatedPanel::SetActive(bool  shouldBeOpen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedPanel*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shouldBeOpen);
}
inline void VROSC::AnimatedPanel::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedPanel*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AnimatedPanel::FinishClosing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedPanel*>::get(),
                        "FinishClosing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AnimatedPanel::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedPanel*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AnimatedPanel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedPanel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AnimatedPanel* VROSC::AnimatedPanel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AnimatedPanel*>());
}
// Ctor Parameters []
constexpr ::VROSC::AnimatedPanel::AnimatedPanel()   {
}
