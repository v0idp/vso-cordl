#pragma once
// IWYU pragma private; include "GlobalNamespace/SeasonalEffectManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SeasonalEffectManager_def.hpp"
#include "GlobalNamespace/zzzz__SeasonDatabase_def.hpp"
#include "GlobalNamespace/zzzz__SeasonMaterialChanger_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SeasonalEffectManager.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SeasonalEffectManager::*)()>(&::GlobalNamespace::SeasonalEffectManager::Start)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x16c2b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonalEffectManager*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeasonalEffectManager.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SeasonalEffectManager::*)()>(&::GlobalNamespace::SeasonalEffectManager::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16c2f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonalEffectManager*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeasonalEffectManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SeasonalEffectManager::*)()>(&::GlobalNamespace::SeasonalEffectManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16c2f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonalEffectManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SeasonDatabase>& GlobalNamespace::SeasonalEffectManager::__cordl_internal_get_seasonDatabase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seasonDatabase;
}
constexpr ::UnityW<::GlobalNamespace::SeasonDatabase> const& GlobalNamespace::SeasonalEffectManager::__cordl_internal_get_seasonDatabase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seasonDatabase;
}
constexpr void GlobalNamespace::SeasonalEffectManager::__cordl_internal_set_seasonDatabase(::UnityW<::GlobalNamespace::SeasonDatabase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___seasonDatabase)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SeasonMaterialChanger>& GlobalNamespace::SeasonalEffectManager::__cordl_internal_get_materialChanger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialChanger;
}
constexpr ::UnityW<::GlobalNamespace::SeasonMaterialChanger> const& GlobalNamespace::SeasonalEffectManager::__cordl_internal_get_materialChanger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialChanger;
}
constexpr void GlobalNamespace::SeasonalEffectManager::__cordl_internal_set_materialChanger(::UnityW<::GlobalNamespace::SeasonMaterialChanger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___materialChanger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SeasonalEffectManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonalEffectManager*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SeasonalEffectManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonalEffectManager*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SeasonalEffectManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonalEffectManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SeasonalEffectManager* GlobalNamespace::SeasonalEffectManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SeasonalEffectManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SeasonalEffectManager::SeasonalEffectManager()   {
}
