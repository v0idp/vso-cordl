#pragma once
// IWYU pragma private; include "VROSC/Credits/CreditsMultiObject.hpp"
#include "VROSC/Credits/zzzz__CreditsObject_impl.hpp"
#include "VROSC/Credits/zzzz__CreditsMultiObject_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__AdjustableMesh_def.hpp"
//  Writing Method size for method: ::VROSC::Credits::CreditsMultiObject.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Credits::CreditsMultiObject::*)()>(&::VROSC::Credits::CreditsMultiObject::Awake)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x17dc880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsMultiObject*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Credits::CreditsMultiObject.UpdateVisibility
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Credits::CreditsMultiObject::*)(float_t)>(&::VROSC::Credits::CreditsMultiObject::UpdateVisibility)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x17dc9b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsMultiObject*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsMultiObject*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Credits::CreditsMultiObject._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Credits::CreditsMultiObject::*)()>(&::VROSC::Credits::CreditsMultiObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17dcb24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsMultiObject*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>,::Array<::UnityW<::TMPro::TextMeshPro>>*>& VROSC::Credits::CreditsMultiObject::__cordl_internal_get__lines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lines;
}
constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>,::Array<::UnityW<::TMPro::TextMeshPro>>*> const& VROSC::Credits::CreditsMultiObject::__cordl_internal_get__lines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lines;
}
constexpr void VROSC::Credits::CreditsMultiObject::__cordl_internal_set__lines(::ArrayW<::UnityW<::TMPro::TextMeshPro>,::Array<::UnityW<::TMPro::TextMeshPro>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lines)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*>& VROSC::Credits::CreditsMultiObject::__cordl_internal_get__meshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshes;
}
constexpr ::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*> const& VROSC::Credits::CreditsMultiObject::__cordl_internal_get__meshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshes;
}
constexpr void VROSC::Credits::CreditsMultiObject::__cordl_internal_set__meshes(::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& VROSC::Credits::CreditsMultiObject::__cordl_internal_get__linesColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linesColors;
}
constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& VROSC::Credits::CreditsMultiObject::__cordl_internal_get__linesColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linesColors;
}
constexpr void VROSC::Credits::CreditsMultiObject::__cordl_internal_set__linesColors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____linesColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::Credits::CreditsMultiObject::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsMultiObject*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Credits::CreditsMultiObject::UpdateVisibility(float_t  visible)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsMultiObject*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visible);
}
inline void VROSC::Credits::CreditsMultiObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsMultiObject*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::Credits::CreditsMultiObject* VROSC::Credits::CreditsMultiObject::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Credits::CreditsMultiObject*>());
}
// Ctor Parameters []
constexpr ::VROSC::Credits::CreditsMultiObject::CreditsMultiObject()   {
}
