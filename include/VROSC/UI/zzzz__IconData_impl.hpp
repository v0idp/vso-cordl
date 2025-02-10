#pragma once
// IWYU pragma private; include "VROSC/UI/IconData.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "VROSC/UI/zzzz__IconData_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::VROSC::UI::IconData.get_Mesh
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (::VROSC::UI::IconData::*)()>(&::VROSC::UI::IconData::get_Mesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e8f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::IconData*>::get(),
                        "get_Mesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::IconData.Resize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::IconData::*)(::UnityEngine::Mesh*, ::UnityEngine::Rect, float_t)>(&::VROSC::UI::IconData::Resize)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x17e8f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::IconData*>::get(),
                        "Resize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::IconData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::IconData::*)()>(&::VROSC::UI::IconData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e90dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::IconData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Mesh>& VROSC::UI::IconData::__cordl_internal_get__mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& VROSC::UI::IconData::__cordl_internal_get__mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr void VROSC::UI::IconData::__cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::UI::IconData::__cordl_internal_get__colorized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorized;
}
constexpr bool const& VROSC::UI::IconData::__cordl_internal_get__colorized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorized;
}
constexpr void VROSC::UI::IconData::__cordl_internal_set__colorized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colorized = value;
}
inline ::UnityW<::UnityEngine::Mesh> VROSC::UI::IconData::get_Mesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::IconData*>::get(),
                        "get_Mesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(this, ___internal_method);
}
inline void VROSC::UI::IconData::Resize(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rect  rect, float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::IconData*>::get(),
                        "Resize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, rect, scale);
}
inline void VROSC::UI::IconData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::IconData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UI::IconData* VROSC::UI::IconData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::IconData*>());
}
// Ctor Parameters []
constexpr ::VROSC::UI::IconData::IconData()   {
}
