#pragma once
// IWYU pragma private; include "VROSC/UISchemeController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__UISchemeController_def.hpp"
#include "VROSC/UI/zzzz__UIScheme_def.hpp"
//  Writing Method size for method: ::VROSC::UISchemeController.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UISchemeController::*)()>(&::VROSC::UISchemeController::Setup)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x17770e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISchemeController*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UISchemeController.SetScheme
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UISchemeController::*)(::VROSC::UI::UIScheme*)>(&::VROSC::UISchemeController::SetScheme)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x177712c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISchemeController*>::get(),
                        "SetScheme",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIScheme*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UISchemeController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UISchemeController::*)()>(&::VROSC::UISchemeController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1777144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISchemeController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UI::UIScheme>& VROSC::UISchemeController::__cordl_internal_get__defaultScheme()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultScheme;
}
constexpr ::UnityW<::VROSC::UI::UIScheme> const& VROSC::UISchemeController::__cordl_internal_get__defaultScheme() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultScheme;
}
constexpr void VROSC::UISchemeController::__cordl_internal_set__defaultScheme(::UnityW<::VROSC::UI::UIScheme>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultScheme)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::UISchemeController::Setup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISchemeController*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UISchemeController::SetScheme(::VROSC::UI::UIScheme*  uIScheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISchemeController*>::get(),
                        "SetScheme",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIScheme*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uIScheme);
}
inline void VROSC::UISchemeController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISchemeController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UISchemeController* VROSC::UISchemeController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UISchemeController*>());
}
// Ctor Parameters []
constexpr ::VROSC::UISchemeController::UISchemeController()   {
}
