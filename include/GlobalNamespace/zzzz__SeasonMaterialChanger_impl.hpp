#pragma once
// IWYU pragma private; include "GlobalNamespace/SeasonMaterialChanger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__SeasonMaterialChanger_def.hpp"
#include "GlobalNamespace/zzzz__SeasonMaterialChanger_def.hpp"
#include "GlobalNamespace/zzzz__SeasonType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial.ApplySeasonTexture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::*)(::GlobalNamespace::SeasonType)>(&::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::ApplySeasonTexture)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x16c34cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial*>::get(),
                        "ApplySeasonTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SeasonType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::*)()>(&::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16c364c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::__cordl_internal_get__material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::__cordl_internal_get__material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material;
}
constexpr void GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::__cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture>& GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::__cordl_internal_get__defaultTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultTexture;
}
constexpr ::UnityW<::UnityEngine::Texture> const& GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::__cordl_internal_get__defaultTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultTexture;
}
constexpr void GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::__cordl_internal_set__defaultTexture(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture>& GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::__cordl_internal_get__winterTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____winterTexture;
}
constexpr ::UnityW<::UnityEngine::Texture> const& GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::__cordl_internal_get__winterTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____winterTexture;
}
constexpr void GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::__cordl_internal_set__winterTexture(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____winterTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::__cordl_internal_get__snowEmission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snowEmission;
}
constexpr float_t const& GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::__cordl_internal_get__snowEmission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snowEmission;
}
constexpr void GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::__cordl_internal_set__snowEmission(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snowEmission = value;
}
inline void GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::ApplySeasonTexture(::GlobalNamespace::SeasonType  currentSeason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial*>::get(),
                        "ApplySeasonTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SeasonType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentSeason);
}
inline void GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial* GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial::SeasonMaterialChanger_SeasonalMaterial()   {
}
//  Writing Method size for method: ::GlobalNamespace::SeasonMaterialChanger.OnValidate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SeasonMaterialChanger::*)()>(&::GlobalNamespace::SeasonMaterialChanger::OnValidate)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x16c336c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonMaterialChanger*>::get(),
                        "OnValidate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeasonMaterialChanger.ApplySeason
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SeasonMaterialChanger::*)(::GlobalNamespace::SeasonType)>(&::GlobalNamespace::SeasonMaterialChanger::ApplySeason)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x16c2dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonMaterialChanger*>::get(),
                        "ApplySeason",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SeasonType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeasonMaterialChanger._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SeasonMaterialChanger::*)()>(&::GlobalNamespace::SeasonMaterialChanger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16c3644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonMaterialChanger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial*>*& GlobalNamespace::SeasonMaterialChanger::__cordl_internal_get_seasonalMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seasonalMaterials;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial*>* const& GlobalNamespace::SeasonMaterialChanger::__cordl_internal_get_seasonalMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seasonalMaterials;
}
constexpr void GlobalNamespace::SeasonMaterialChanger::__cordl_internal_set_seasonalMaterials(::System::Collections::Generic::List_1<::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___seasonalMaterials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SeasonMaterialChanger::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonMaterialChanger*>::get(),
                        "OnValidate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SeasonMaterialChanger::ApplySeason(::GlobalNamespace::SeasonType  currentSeason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonMaterialChanger*>::get(),
                        "ApplySeason",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SeasonType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentSeason);
}
inline void GlobalNamespace::SeasonMaterialChanger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonMaterialChanger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SeasonMaterialChanger* GlobalNamespace::SeasonMaterialChanger::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SeasonMaterialChanger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SeasonMaterialChanger::SeasonMaterialChanger()   {
}
