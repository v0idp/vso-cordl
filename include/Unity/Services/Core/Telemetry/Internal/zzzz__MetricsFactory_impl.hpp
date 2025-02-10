#pragma once
// IWYU pragma private; include "Unity/Services/Core/Telemetry/Internal/MetricsFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IMetricsFactory_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__MetricsFactory_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IMetrics_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::MetricsFactory.Create
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Telemetry::Internal::IMetrics* (::Unity::Services::Core::Telemetry::Internal::MetricsFactory::*)(::StringW)>(&::Unity::Services::Core::Telemetry::Internal::MetricsFactory::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2ea7040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsFactory*>::get(),
                        "Create",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::MetricsFactory._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::MetricsFactory::*)()>(&::Unity::Services::Core::Telemetry::Internal::MetricsFactory::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ea7090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsFactory*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::StringW>*& Unity::Services::Core::Telemetry::Internal::MetricsFactory::__cordl_internal_get__CommonTags_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CommonTags_k__BackingField;
}
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::StringW>* const& Unity::Services::Core::Telemetry::Internal::MetricsFactory::__cordl_internal_get__CommonTags_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CommonTags_k__BackingField;
}
constexpr void Unity::Services::Core::Telemetry::Internal::MetricsFactory::__cordl_internal_set__CommonTags_k__BackingField(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CommonTags_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Core::Telemetry::Internal::IMetrics* Unity::Services::Core::Telemetry::Internal::MetricsFactory::Create(::StringW  packageName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsFactory*>::get(),
                        "Create",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Telemetry::Internal::IMetrics*, false>(this, ___internal_method, packageName);
}
inline void Unity::Services::Core::Telemetry::Internal::MetricsFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsFactory*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Telemetry::Internal::MetricsFactory* Unity::Services::Core::Telemetry::Internal::MetricsFactory::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Telemetry::Internal::MetricsFactory*>());
}
/// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IMetricsFactory"
constexpr  Unity::Services::Core::Telemetry::Internal::MetricsFactory::operator ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*() noexcept {
return static_cast<::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IMetricsFactory"
constexpr ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory* Unity::Services::Core::Telemetry::Internal::MetricsFactory::i___Unity__Services__Core__Telemetry__Internal__IMetricsFactory() noexcept {
return static_cast<::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr  Unity::Services::Core::Telemetry::Internal::MetricsFactory::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Core::Telemetry::Internal::MetricsFactory::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::MetricsFactory::MetricsFactory()   {
}
