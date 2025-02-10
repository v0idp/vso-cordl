#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/ServiceRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceRegistry_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__ServiceRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::ServiceRegistry._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::ServiceRegistry::*)()>(&::Unity::Services::Core::Internal::ServiceRegistry::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2e9e414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::ServiceRegistry*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Object*>*& Unity::Services::Core::Internal::ServiceRegistry::__cordl_internal_get__ServiceTypeHashToInstance_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServiceTypeHashToInstance_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Object*>* const& Unity::Services::Core::Internal::ServiceRegistry::__cordl_internal_get__ServiceTypeHashToInstance_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServiceTypeHashToInstance_k__BackingField;
}
constexpr void Unity::Services::Core::Internal::ServiceRegistry::__cordl_internal_set__ServiceTypeHashToInstance_k__BackingField(::System::Collections::Generic::Dictionary_2<int32_t,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ServiceTypeHashToInstance_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Core::Internal::ServiceRegistry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::ServiceRegistry*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Internal::ServiceRegistry* Unity::Services::Core::Internal::ServiceRegistry::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::ServiceRegistry*>());
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceRegistry"
constexpr  Unity::Services::Core::Internal::ServiceRegistry::operator ::Unity::Services::Core::Internal::IServiceRegistry*() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceRegistry*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceRegistry"
constexpr ::Unity::Services::Core::Internal::IServiceRegistry* Unity::Services::Core::Internal::ServiceRegistry::i___Unity__Services__Core__Internal__IServiceRegistry() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceRegistry*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::ServiceRegistry::ServiceRegistry()   {
}
