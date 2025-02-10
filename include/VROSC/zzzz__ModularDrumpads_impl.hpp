#pragma once
// IWYU pragma private; include "VROSC/ModularDrumpads.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__ModularDrumpads_def.hpp"
#include "VROSC/zzzz__DrumpadSpawner_def.hpp"
#include "VROSC/zzzz__ModularDrumpads_def.hpp"
#include "VROSC/zzzz__ModularDrumsController_def.hpp"
#include "VROSC/zzzz__SampleGroup_def.hpp"
//  Writing Method size for method: ::VROSC::ModularDrumpads_SpawnerSample._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ModularDrumpads_SpawnerSample::*)()>(&::VROSC::ModularDrumpads_SpawnerSample::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170d484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumpads_SpawnerSample*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::DrumpadSpawner>& VROSC::ModularDrumpads_SpawnerSample::__cordl_internal_get_Spawner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Spawner;
}
constexpr ::UnityW<::VROSC::DrumpadSpawner> const& VROSC::ModularDrumpads_SpawnerSample::__cordl_internal_get_Spawner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Spawner;
}
constexpr void VROSC::ModularDrumpads_SpawnerSample::__cordl_internal_set_Spawner(::UnityW<::VROSC::DrumpadSpawner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Spawner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::SampleGroup>& VROSC::ModularDrumpads_SpawnerSample::__cordl_internal_get_SampleGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SampleGroup;
}
constexpr ::UnityW<::VROSC::SampleGroup> const& VROSC::ModularDrumpads_SpawnerSample::__cordl_internal_get_SampleGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SampleGroup;
}
constexpr void VROSC::ModularDrumpads_SpawnerSample::__cordl_internal_set_SampleGroup(::UnityW<::VROSC::SampleGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SampleGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ModularDrumpads_SpawnerSample::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumpads_SpawnerSample*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ModularDrumpads_SpawnerSample* VROSC::ModularDrumpads_SpawnerSample::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ModularDrumpads_SpawnerSample*>());
}
// Ctor Parameters []
constexpr ::VROSC::ModularDrumpads_SpawnerSample::ModularDrumpads_SpawnerSample()   {
}
//  Writing Method size for method: ::VROSC::ModularDrumpads.get_SpawnedPadsCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::ModularDrumpads::*)()>(&::VROSC::ModularDrumpads::get_SpawnedPadsCount)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x170d1dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumpads*>::get(),
                        "get_SpawnedPadsCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ModularDrumpads.get_IsSetup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::ModularDrumpads::*)()>(&::VROSC::ModularDrumpads::get_IsSetup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170d254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumpads*>::get(),
                        "get_IsSetup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ModularDrumpads.set_IsSetup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ModularDrumpads::*)(bool)>(&::VROSC::ModularDrumpads::set_IsSetup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x170d25c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumpads*>::get(),
                        "set_IsSetup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ModularDrumpads.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ModularDrumpads::*)(::VROSC::ModularDrumsController*)>(&::VROSC::ModularDrumpads::Setup)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x170d268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumpads*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ModularDrumsController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ModularDrumpads.RefreshSpawners
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ModularDrumpads::*)(::VROSC::ModularDrumsController*)>(&::VROSC::ModularDrumpads::RefreshSpawners)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x170d2f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumpads*>::get(),
                        "RefreshSpawners",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ModularDrumsController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ModularDrumpads.DeleteAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ModularDrumpads::*)()>(&::VROSC::ModularDrumpads::DeleteAll)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x170d3ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumpads*>::get(),
                        "DeleteAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ModularDrumpads.SetActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ModularDrumpads::*)(bool)>(&::VROSC::ModularDrumpads::SetActive)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x170d410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumpads*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ModularDrumpads._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ModularDrumpads::*)()>(&::VROSC::ModularDrumpads::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170d47c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumpads*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::VROSC::ModularDrumpads_SpawnerSample*,::Array<::VROSC::ModularDrumpads_SpawnerSample*>*>& VROSC::ModularDrumpads::__cordl_internal_get__spawnersSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnersSamples;
}
constexpr ::ArrayW<::VROSC::ModularDrumpads_SpawnerSample*,::Array<::VROSC::ModularDrumpads_SpawnerSample*>*> const& VROSC::ModularDrumpads::__cordl_internal_get__spawnersSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnersSamples;
}
constexpr void VROSC::ModularDrumpads::__cordl_internal_set__spawnersSamples(::ArrayW<::VROSC::ModularDrumpads_SpawnerSample*,::Array<::VROSC::ModularDrumpads_SpawnerSample*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spawnersSamples)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::ModularDrumpads::__cordl_internal_get__IsSetup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSetup_k__BackingField;
}
constexpr bool const& VROSC::ModularDrumpads::__cordl_internal_get__IsSetup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSetup_k__BackingField;
}
constexpr void VROSC::ModularDrumpads::__cordl_internal_set__IsSetup_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSetup_k__BackingField = value;
}
inline int32_t VROSC::ModularDrumpads::get_SpawnedPadsCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumpads*>::get(),
                        "get_SpawnedPadsCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool VROSC::ModularDrumpads::get_IsSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumpads*>::get(),
                        "get_IsSetup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::ModularDrumpads::set_IsSetup(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumpads*>::get(),
                        "set_IsSetup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::ModularDrumpads::Setup(::VROSC::ModularDrumsController*  instrumentController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumpads*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ModularDrumsController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrumentController);
}
inline void VROSC::ModularDrumpads::RefreshSpawners(::VROSC::ModularDrumsController*  instrumentController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumpads*>::get(),
                        "RefreshSpawners",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ModularDrumsController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrumentController);
}
inline void VROSC::ModularDrumpads::DeleteAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumpads*>::get(),
                        "DeleteAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ModularDrumpads::SetActive(bool  isActive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumpads*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isActive);
}
inline void VROSC::ModularDrumpads::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ModularDrumpads*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ModularDrumpads* VROSC::ModularDrumpads::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ModularDrumpads*>());
}
// Ctor Parameters []
constexpr ::VROSC::ModularDrumpads::ModularDrumpads()   {
}
