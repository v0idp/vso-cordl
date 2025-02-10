#pragma once
// IWYU pragma private; include "VROSC/AdjustableMeshColors.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__AdjustableMeshColors_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__AdjustableMesh_def.hpp"
//  Writing Method size for method: ::VROSC::AdjustableMeshColors._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshColors::*)(::VROSC::AdjustableMesh*)>(&::VROSC::AdjustableMeshColors::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x17ab374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColors*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AdjustableMesh*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AdjustableMeshColors.SetColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshColors::*)(::UnityEngine::Color)>(&::VROSC::AdjustableMeshColors::SetColor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColors*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColors*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AdjustableMeshColors.Tint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshColors::*)(::UnityEngine::Color, float_t)>(&::VROSC::AdjustableMeshColors::Tint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColors*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColors*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::AdjustableMesh>& VROSC::AdjustableMeshColors::__cordl_internal_get__adjustableMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____adjustableMesh;
}
constexpr ::UnityW<::VROSC::AdjustableMesh> const& VROSC::AdjustableMeshColors::__cordl_internal_get__adjustableMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____adjustableMesh;
}
constexpr void VROSC::AdjustableMeshColors::__cordl_internal_set__adjustableMesh(::UnityW<::VROSC::AdjustableMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____adjustableMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::Color>*& VROSC::AdjustableMeshColors::__cordl_internal_get_OnColorChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnColorChange;
}
constexpr ::System::Action_1<::UnityEngine::Color>* const& VROSC::AdjustableMeshColors::__cordl_internal_get_OnColorChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnColorChange;
}
constexpr void VROSC::AdjustableMeshColors::__cordl_internal_set_OnColorChange(::System::Action_1<::UnityEngine::Color>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnColorChange)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::AdjustableMeshColors::_ctor(::VROSC::AdjustableMesh*  adjustableMesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColors*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AdjustableMesh*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, adjustableMesh);
}
inline void VROSC::AdjustableMeshColors::SetColor(::UnityEngine::Color  color)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColors*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void VROSC::AdjustableMeshColors::Tint(::UnityEngine::Color  color, float_t  amount)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColors*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color, amount);
}
inline ::VROSC::AdjustableMeshColors* VROSC::AdjustableMeshColors::New_ctor(::VROSC::AdjustableMesh*  adjustableMesh)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AdjustableMeshColors*>(adjustableMesh));
}
// Ctor Parameters []
constexpr ::VROSC::AdjustableMeshColors::AdjustableMeshColors()   {
}
