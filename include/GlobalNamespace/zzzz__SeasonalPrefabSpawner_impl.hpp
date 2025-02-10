#pragma once
// IWYU pragma private; include "GlobalNamespace/SeasonalPrefabSpawner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SeasonalPrefabSpawner_def.hpp"
#include "GlobalNamespace/zzzz__SeasonDatabase_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SeasonalPrefabSpawner.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SeasonalPrefabSpawner::*)()>(&::GlobalNamespace::SeasonalPrefabSpawner::Start)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x16c2f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonalPrefabSpawner*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeasonalPrefabSpawner._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SeasonalPrefabSpawner::*)()>(&::GlobalNamespace::SeasonalPrefabSpawner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16c3270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonalPrefabSpawner*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SeasonDatabase>& GlobalNamespace::SeasonalPrefabSpawner::__cordl_internal_get_seasonDatabase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seasonDatabase;
}
constexpr ::UnityW<::GlobalNamespace::SeasonDatabase> const& GlobalNamespace::SeasonalPrefabSpawner::__cordl_internal_get_seasonDatabase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seasonDatabase;
}
constexpr void GlobalNamespace::SeasonalPrefabSpawner::__cordl_internal_set_seasonDatabase(::UnityW<::GlobalNamespace::SeasonDatabase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___seasonDatabase)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SeasonalPrefabSpawner::__cordl_internal_get_winterPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___winterPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SeasonalPrefabSpawner::__cordl_internal_get_winterPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___winterPrefab;
}
constexpr void GlobalNamespace::SeasonalPrefabSpawner::__cordl_internal_set_winterPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___winterPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SeasonalPrefabSpawner::__cordl_internal_get_defaultPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SeasonalPrefabSpawner::__cordl_internal_get_defaultPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultPrefab;
}
constexpr void GlobalNamespace::SeasonalPrefabSpawner::__cordl_internal_set_defaultPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SeasonalPrefabSpawner::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonalPrefabSpawner*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SeasonalPrefabSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SeasonalPrefabSpawner*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SeasonalPrefabSpawner* GlobalNamespace::SeasonalPrefabSpawner::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SeasonalPrefabSpawner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SeasonalPrefabSpawner::SeasonalPrefabSpawner()   {
}
