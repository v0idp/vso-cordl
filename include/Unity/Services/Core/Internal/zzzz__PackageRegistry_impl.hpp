#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/PackageRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__IPackageRegistry_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__PackageRegistry_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__CoreRegistration_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__DependencyTree_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::PackageRegistry.get_Tree
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Internal::DependencyTree* (::Unity::Services::Core::Internal::PackageRegistry::*)()>(&::Unity::Services::Core::Internal::PackageRegistry::get_Tree)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ea2034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::PackageRegistry*>::get(),
                        "get_Tree",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::PackageRegistry.set_Tree
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::PackageRegistry::*)(::Unity::Services::Core::Internal::DependencyTree*)>(&::Unity::Services::Core::Internal::PackageRegistry::set_Tree)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ea203c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::PackageRegistry*>::get(),
                        "set_Tree",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::DependencyTree*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::PackageRegistry._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::PackageRegistry::*)(::Unity::Services::Core::Internal::DependencyTree*)>(&::Unity::Services::Core::Internal::PackageRegistry::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e9e1a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::PackageRegistry*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::DependencyTree*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::PackageRegistry.AddComponentDependencyToPackage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::PackageRegistry::*)(int32_t, int32_t)>(&::Unity::Services::Core::Internal::PackageRegistry::AddComponentDependencyToPackage)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2ea2044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::PackageRegistry*>::get(),
                        "AddComponentDependencyToPackage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Core::Internal::DependencyTree*& Unity::Services::Core::Internal::PackageRegistry::__cordl_internal_get__Tree_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Tree_k__BackingField;
}
constexpr ::Unity::Services::Core::Internal::DependencyTree* const& Unity::Services::Core::Internal::PackageRegistry::__cordl_internal_get__Tree_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Tree_k__BackingField;
}
constexpr void Unity::Services::Core::Internal::PackageRegistry::__cordl_internal_set__Tree_k__BackingField(::Unity::Services::Core::Internal::DependencyTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Tree_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Core::Internal::DependencyTree* Unity::Services::Core::Internal::PackageRegistry::get_Tree()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::PackageRegistry*>::get(),
                        "get_Tree",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::DependencyTree*, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::PackageRegistry::set_Tree(::Unity::Services::Core::Internal::DependencyTree*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::PackageRegistry*>::get(),
                        "set_Tree",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::DependencyTree*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Core::Internal::PackageRegistry::_ctor(::Unity::Services::Core::Internal::DependencyTree*  tree)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::PackageRegistry*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::DependencyTree*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tree);
}
template<typename TPackage>
inline ::Unity::Services::Core::Internal::CoreRegistration Unity::Services::Core::Internal::PackageRegistry::RegisterPackage(TPackage  package)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::PackageRegistry*>::get(),
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
inline void Unity::Services::Core::Internal::PackageRegistry::RegisterDependency(int32_t  packageTypeHash)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::PackageRegistry*>::get(),
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
inline void Unity::Services::Core::Internal::PackageRegistry::RegisterOptionalDependency(int32_t  packageTypeHash)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::PackageRegistry*>::get(),
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
inline void Unity::Services::Core::Internal::PackageRegistry::RegisterProvision(int32_t  packageTypeHash)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::PackageRegistry*>::get(),
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
inline void Unity::Services::Core::Internal::PackageRegistry::AddComponentDependencyToPackage(int32_t  componentTypeHash, int32_t  packageTypeHash)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::PackageRegistry*>::get(),
                        "AddComponentDependencyToPackage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, componentTypeHash, packageTypeHash);
}
inline ::Unity::Services::Core::Internal::PackageRegistry* Unity::Services::Core::Internal::PackageRegistry::New_ctor(::Unity::Services::Core::Internal::DependencyTree*  tree)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::PackageRegistry*>(tree));
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IPackageRegistry"
constexpr  Unity::Services::Core::Internal::PackageRegistry::operator ::Unity::Services::Core::Internal::IPackageRegistry*() noexcept {
return static_cast<::Unity::Services::Core::Internal::IPackageRegistry*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IPackageRegistry"
constexpr ::Unity::Services::Core::Internal::IPackageRegistry* Unity::Services::Core::Internal::PackageRegistry::i___Unity__Services__Core__Internal__IPackageRegistry() noexcept {
return static_cast<::Unity::Services::Core::Internal::IPackageRegistry*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::PackageRegistry::PackageRegistry()   {
}
