#pragma once
// IWYU pragma private; include "Unity/Services/Core/Environments/Internal/Environments.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Environments/Internal/zzzz__IEnvironments_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_impl.hpp"
#include "Unity/Services/Core/Environments/Internal/zzzz__Environments_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Environments::Internal::Environments.get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Core::Environments::Internal::Environments::*)()>(&::Unity::Services::Core::Environments::Internal::Environments::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e9d8a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Environments::Internal::Environments*>::get(),
                        "get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Environments::Internal::Environments.set_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Environments::Internal::Environments::*)(::StringW)>(&::Unity::Services::Core::Environments::Internal::Environments::set_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e9d8a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Environments::Internal::Environments*>::get(),
                        "set_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Environments::Internal::Environments._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Environments::Internal::Environments::*)()>(&::Unity::Services::Core::Environments::Internal::Environments::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e9d8b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Environments::Internal::Environments*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Core::Environments::Internal::Environments::__cordl_internal_get__Current_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
constexpr ::StringW const& Unity::Services::Core::Environments::Internal::Environments::__cordl_internal_get__Current_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
constexpr void Unity::Services::Core::Environments::Internal::Environments::__cordl_internal_set__Current_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Current_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Unity::Services::Core::Environments::Internal::Environments::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Environments::Internal::Environments*>::get(),
                        "get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Environments::Internal::Environments::set_Current(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Environments::Internal::Environments*>::get(),
                        "set_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Core::Environments::Internal::Environments::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Environments::Internal::Environments*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Environments::Internal::Environments* Unity::Services::Core::Environments::Internal::Environments::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Environments::Internal::Environments*>());
}
/// @brief Convert operator to "::Unity::Services::Core::Environments::Internal::IEnvironments"
constexpr  Unity::Services::Core::Environments::Internal::Environments::operator ::Unity::Services::Core::Environments::Internal::IEnvironments*() noexcept {
return static_cast<::Unity::Services::Core::Environments::Internal::IEnvironments*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Environments::Internal::IEnvironments"
constexpr ::Unity::Services::Core::Environments::Internal::IEnvironments* Unity::Services::Core::Environments::Internal::Environments::i___Unity__Services__Core__Environments__Internal__IEnvironments() noexcept {
return static_cast<::Unity::Services::Core::Environments::Internal::IEnvironments*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr  Unity::Services::Core::Environments::Internal::Environments::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Core::Environments::Internal::Environments::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Environments::Internal::Environments::Environments()   {
}
