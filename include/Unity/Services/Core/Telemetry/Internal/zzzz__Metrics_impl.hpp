#pragma once
// IWYU pragma private; include "Unity/Services/Core/Telemetry/Internal/Metrics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IMetrics_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__Metrics_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::Metrics.Unity_Services_Core_Telemetry_Internal_IMetrics_SendSumMetric
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::Metrics::*)(::StringW, double_t, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Unity::Services::Core::Telemetry::Internal::Metrics::Unity_Services_Core_Telemetry_Internal_IMetrics_SendSumMetric)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ea6fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Metrics*>::get(),
                        "Unity.Services.Core.Telemetry.Internal.IMetrics.SendSumMetric",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::Metrics._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::Metrics::*)()>(&::Unity::Services::Core::Telemetry::Internal::Metrics::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ea6fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Metrics*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*& Unity::Services::Core::Telemetry::Internal::Metrics::__cordl_internal_get__PackageTags_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PackageTags_k__BackingField;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* const& Unity::Services::Core::Telemetry::Internal::Metrics::__cordl_internal_get__PackageTags_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PackageTags_k__BackingField;
}
constexpr void Unity::Services::Core::Telemetry::Internal::Metrics::__cordl_internal_set__PackageTags_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PackageTags_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Core::Telemetry::Internal::Metrics::Unity_Services_Core_Telemetry_Internal_IMetrics_SendSumMetric(::StringW  name, double_t  value, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  tags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Metrics*>::get(),
                        "Unity.Services.Core.Telemetry.Internal.IMetrics.SendSumMetric",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value, tags);
}
inline void Unity::Services::Core::Telemetry::Internal::Metrics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::Metrics*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Telemetry::Internal::Metrics* Unity::Services::Core::Telemetry::Internal::Metrics::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Telemetry::Internal::Metrics*>());
}
/// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IMetrics"
constexpr  Unity::Services::Core::Telemetry::Internal::Metrics::operator ::Unity::Services::Core::Telemetry::Internal::IMetrics*() noexcept {
return static_cast<::Unity::Services::Core::Telemetry::Internal::IMetrics*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IMetrics"
constexpr ::Unity::Services::Core::Telemetry::Internal::IMetrics* Unity::Services::Core::Telemetry::Internal::Metrics::i___Unity__Services__Core__Telemetry__Internal__IMetrics() noexcept {
return static_cast<::Unity::Services::Core::Telemetry::Internal::IMetrics*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::Metrics::Metrics()   {
}
