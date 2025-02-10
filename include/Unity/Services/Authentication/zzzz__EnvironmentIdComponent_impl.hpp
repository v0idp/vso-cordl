#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/EnvironmentIdComponent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/Internal/zzzz__IEnvironmentId_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_impl.hpp"
#include "Unity/Services/Authentication/zzzz__EnvironmentIdComponent_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::EnvironmentIdComponent.set_EnvironmentId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::EnvironmentIdComponent::*)(::StringW)>(&::Unity::Services::Authentication::EnvironmentIdComponent::set_EnvironmentId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e97c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::EnvironmentIdComponent*>::get(),
                        "set_EnvironmentId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::EnvironmentIdComponent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::EnvironmentIdComponent::*)()>(&::Unity::Services::Authentication::EnvironmentIdComponent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e9659c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::EnvironmentIdComponent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Authentication::EnvironmentIdComponent::__cordl_internal_get__EnvironmentId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentId_k__BackingField;
}
constexpr ::StringW const& Unity::Services::Authentication::EnvironmentIdComponent::__cordl_internal_get__EnvironmentId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentId_k__BackingField;
}
constexpr void Unity::Services::Authentication::EnvironmentIdComponent::__cordl_internal_set__EnvironmentId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____EnvironmentId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Authentication::EnvironmentIdComponent::set_EnvironmentId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::EnvironmentIdComponent*>::get(),
                        "set_EnvironmentId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Authentication::EnvironmentIdComponent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::EnvironmentIdComponent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::EnvironmentIdComponent* Unity::Services::Authentication::EnvironmentIdComponent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::EnvironmentIdComponent*>());
}
/// @brief Convert operator to "::Unity::Services::Authentication::Internal::IEnvironmentId"
constexpr  Unity::Services::Authentication::EnvironmentIdComponent::operator ::Unity::Services::Authentication::Internal::IEnvironmentId*() noexcept {
return static_cast<::Unity::Services::Authentication::Internal::IEnvironmentId*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Authentication::Internal::IEnvironmentId"
constexpr ::Unity::Services::Authentication::Internal::IEnvironmentId* Unity::Services::Authentication::EnvironmentIdComponent::i___Unity__Services__Authentication__Internal__IEnvironmentId() noexcept {
return static_cast<::Unity::Services::Authentication::Internal::IEnvironmentId*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr  Unity::Services::Authentication::EnvironmentIdComponent::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Authentication::EnvironmentIdComponent::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::EnvironmentIdComponent::EnvironmentIdComponent()   {
}
