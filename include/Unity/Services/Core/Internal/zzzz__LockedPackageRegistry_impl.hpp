#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/LockedPackageRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__IPackageRegistry_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__LockedPackageRegistry_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__CoreRegistration_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__DependencyTree_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IPackageRegistry_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::LockedPackageRegistry.get_Registry
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Internal::IPackageRegistry* (::Unity::Services::Core::Internal::LockedPackageRegistry::*)()>(&::Unity::Services::Core::Internal::LockedPackageRegistry::get_Registry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ea1f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::LockedPackageRegistry*>::get(),
                        "get_Registry",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::LockedPackageRegistry._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::LockedPackageRegistry::*)(::Unity::Services::Core::Internal::IPackageRegistry*)>(&::Unity::Services::Core::Internal::LockedPackageRegistry::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e9e254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::LockedPackageRegistry*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IPackageRegistry*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::LockedPackageRegistry.get_Tree
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Internal::DependencyTree* (::Unity::Services::Core::Internal::LockedPackageRegistry::*)()>(&::Unity::Services::Core::Internal::LockedPackageRegistry::get_Tree)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2ea1f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::LockedPackageRegistry*>::get(),
                        "get_Tree",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Core::Internal::IPackageRegistry*& Unity::Services::Core::Internal::LockedPackageRegistry::__cordl_internal_get__Registry_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Registry_k__BackingField;
}
constexpr ::Unity::Services::Core::Internal::IPackageRegistry* const& Unity::Services::Core::Internal::LockedPackageRegistry::__cordl_internal_get__Registry_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Registry_k__BackingField;
}
constexpr void Unity::Services::Core::Internal::LockedPackageRegistry::__cordl_internal_set__Registry_k__BackingField(::Unity::Services::Core::Internal::IPackageRegistry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Registry_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Core::Internal::IPackageRegistry* Unity::Services::Core::Internal::LockedPackageRegistry::get_Registry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::LockedPackageRegistry*>::get(),
                        "get_Registry",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::IPackageRegistry*, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::LockedPackageRegistry::_ctor(::Unity::Services::Core::Internal::IPackageRegistry*  registryToLock)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::LockedPackageRegistry*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IPackageRegistry*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, registryToLock);
}
inline ::Unity::Services::Core::Internal::DependencyTree* Unity::Services::Core::Internal::LockedPackageRegistry::get_Tree()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::LockedPackageRegistry*>::get(),
                        "get_Tree",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::DependencyTree*, false>(this, ___internal_method);
}
template<typename TPackage>
inline ::Unity::Services::Core::Internal::CoreRegistration Unity::Services::Core::Internal::LockedPackageRegistry::RegisterPackage(TPackage  package)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::LockedPackageRegistry*>::get(),
                    "RegisterPackage",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPackage>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPackage>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPackage>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::CoreRegistration, false>(this, ___internal_method, package);
}
template<typename TComponent>
inline void Unity::Services::Core::Internal::LockedPackageRegistry::RegisterDependency(int32_t  packageTypeHash)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::LockedPackageRegistry*>::get(),
                    "RegisterDependency",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComponent>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComponent>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packageTypeHash);
}
template<typename TComponent>
inline void Unity::Services::Core::Internal::LockedPackageRegistry::RegisterOptionalDependency(int32_t  packageTypeHash)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::LockedPackageRegistry*>::get(),
                    "RegisterOptionalDependency",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComponent>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComponent>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packageTypeHash);
}
template<typename TComponent>
inline void Unity::Services::Core::Internal::LockedPackageRegistry::RegisterProvision(int32_t  packageTypeHash)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::LockedPackageRegistry*>::get(),
                    "RegisterProvision",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComponent>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComponent>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packageTypeHash);
}
inline ::Unity::Services::Core::Internal::LockedPackageRegistry* Unity::Services::Core::Internal::LockedPackageRegistry::New_ctor(::Unity::Services::Core::Internal::IPackageRegistry*  registryToLock)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::LockedPackageRegistry*>(registryToLock));
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IPackageRegistry"
constexpr  Unity::Services::Core::Internal::LockedPackageRegistry::operator ::Unity::Services::Core::Internal::IPackageRegistry*() noexcept {
return static_cast<::Unity::Services::Core::Internal::IPackageRegistry*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IPackageRegistry"
constexpr ::Unity::Services::Core::Internal::IPackageRegistry* Unity::Services::Core::Internal::LockedPackageRegistry::i___Unity__Services__Core__Internal__IPackageRegistry() noexcept {
return static_cast<::Unity::Services::Core::Internal::IPackageRegistry*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::LockedPackageRegistry::LockedPackageRegistry()   {
}
