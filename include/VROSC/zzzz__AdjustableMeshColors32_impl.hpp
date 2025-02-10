#pragma once
// IWYU pragma private; include "VROSC/AdjustableMeshColors32.hpp"
#include "VROSC/zzzz__AdjustableMeshColors_impl.hpp"
#include "VROSC/zzzz__AdjustableMeshColors32_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__AdjustableMesh_def.hpp"
//  Writing Method size for method: ::VROSC::AdjustableMeshColors32._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshColors32::*)(::VROSC::AdjustableMesh*)>(&::VROSC::AdjustableMeshColors32::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x17ab9b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColors32*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AdjustableMesh*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AdjustableMeshColors32.SetColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshColors32::*)(::UnityEngine::Color)>(&::VROSC::AdjustableMeshColors32::SetColor)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x17abae0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColors32*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColors32*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AdjustableMeshColors32.Tint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshColors32::*)(::UnityEngine::Color, float_t)>(&::VROSC::AdjustableMeshColors32::Tint)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x17abd74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColors32*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColors32*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>& VROSC::AdjustableMeshColors32::__cordl_internal_get__colors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colors;
}
constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> const& VROSC::AdjustableMeshColors32::__cordl_internal_get__colors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colors;
}
constexpr void VROSC::AdjustableMeshColors32::__cordl_internal_set__colors(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>& VROSC::AdjustableMeshColors32::__cordl_internal_get__originalColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalColors;
}
constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> const& VROSC::AdjustableMeshColors32::__cordl_internal_get__originalColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalColors;
}
constexpr void VROSC::AdjustableMeshColors32::__cordl_internal_set__originalColors(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____originalColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>& VROSC::AdjustableMeshColors32::__cordl_internal_get__shownColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shownColors;
}
constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> const& VROSC::AdjustableMeshColors32::__cordl_internal_get__shownColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shownColors;
}
constexpr void VROSC::AdjustableMeshColors32::__cordl_internal_set__shownColors(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shownColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::AdjustableMeshColors32::_ctor(::VROSC::AdjustableMesh*  adjustableMesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColors32*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AdjustableMesh*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, adjustableMesh);
}
inline void VROSC::AdjustableMeshColors32::SetColor(::UnityEngine::Color  color)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColors32*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void VROSC::AdjustableMeshColors32::Tint(::UnityEngine::Color  color, float_t  amount)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColors32*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color, amount);
}
inline ::VROSC::AdjustableMeshColors32* VROSC::AdjustableMeshColors32::New_ctor(::VROSC::AdjustableMesh*  adjustableMesh)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AdjustableMeshColors32*>(adjustableMesh));
}
// Ctor Parameters []
constexpr ::VROSC::AdjustableMeshColors32::AdjustableMeshColors32()   {
}
