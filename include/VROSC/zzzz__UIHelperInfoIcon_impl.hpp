#pragma once
// IWYU pragma private; include "VROSC/UIHelperInfoIcon.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__UIHelperInfoIcon_def.hpp"
#include "VROSC/UI/zzzz__IconData_def.hpp"
#include "VROSC/zzzz__IconMesh_def.hpp"
#include "VROSC/zzzz__UIHelperPositioning_def.hpp"
//  Writing Method size for method: ::VROSC::UIHelperInfoIcon.ShowIcon
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIHelperInfoIcon::*)(::VROSC::UI::IconData*)>(&::VROSC::UIHelperInfoIcon::ShowIcon)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1779140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIHelperInfoIcon*>::get(),
                        "ShowIcon",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::IconData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIHelperInfoIcon.HideIcon
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIHelperInfoIcon::*)()>(&::VROSC::UIHelperInfoIcon::HideIcon)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1779144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIHelperInfoIcon*>::get(),
                        "HideIcon",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIHelperInfoIcon._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIHelperInfoIcon::*)()>(&::VROSC::UIHelperInfoIcon::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1779148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIHelperInfoIcon*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::IconMesh>& VROSC::UIHelperInfoIcon::__cordl_internal_get__icon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____icon;
}
constexpr ::UnityW<::VROSC::IconMesh> const& VROSC::UIHelperInfoIcon::__cordl_internal_get__icon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____icon;
}
constexpr void VROSC::UIHelperInfoIcon::__cordl_internal_set__icon(::UnityW<::VROSC::IconMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____icon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIHelperPositioning>& VROSC::UIHelperInfoIcon::__cordl_internal_get__positioning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positioning;
}
constexpr ::UnityW<::VROSC::UIHelperPositioning> const& VROSC::UIHelperInfoIcon::__cordl_internal_get__positioning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positioning;
}
constexpr void VROSC::UIHelperInfoIcon::__cordl_internal_set__positioning(::UnityW<::VROSC::UIHelperPositioning>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____positioning)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::UIHelperInfoIcon::ShowIcon(::VROSC::UI::IconData*  iconData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIHelperInfoIcon*>::get(),
                        "ShowIcon",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::IconData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iconData);
}
inline void VROSC::UIHelperInfoIcon::HideIcon()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIHelperInfoIcon*>::get(),
                        "HideIcon",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UIHelperInfoIcon::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIHelperInfoIcon*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UIHelperInfoIcon* VROSC::UIHelperInfoIcon::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UIHelperInfoIcon*>());
}
// Ctor Parameters []
constexpr ::VROSC::UIHelperInfoIcon::UIHelperInfoIcon()   {
}
