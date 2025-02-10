#pragma once
// IWYU pragma private; include "Unity/Services/Core/Configuration/ProjectConfiguration.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Configuration/Internal/zzzz__IProjectConfiguration_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_impl.hpp"
#include "Unity/Services/Core/Configuration/zzzz__ProjectConfiguration_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "Unity/Services/Core/Configuration/zzzz__ConfigurationEntry_def.hpp"
#include "Unity/Services/Core/Internal/Serialization/zzzz__IJsonSerializer_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Configuration::ProjectConfiguration._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Configuration::ProjectConfiguration::*)(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::Unity::Services::Core::Configuration::ConfigurationEntry*>*, ::Unity::Services::Core::Internal::Serialization::IJsonSerializer*)>(&::Unity::Services::Core::Configuration::ProjectConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2e9af80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::ProjectConfiguration*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::Unity::Services::Core::Configuration::ConfigurationEntry*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::Serialization::IJsonSerializer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Configuration::ProjectConfiguration.GetString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Core::Configuration::ProjectConfiguration::*)(::StringW, ::StringW)>(&::Unity::Services::Core::Configuration::ProjectConfiguration::GetString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2e9afac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::ProjectConfiguration*>::get(),
                        "GetString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::Unity::Services::Core::Configuration::ConfigurationEntry*>*& Unity::Services::Core::Configuration::ProjectConfiguration::__cordl_internal_get_m_ConfigValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConfigValues;
}
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::Unity::Services::Core::Configuration::ConfigurationEntry*>* const& Unity::Services::Core::Configuration::ProjectConfiguration::__cordl_internal_get_m_ConfigValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConfigValues;
}
constexpr void Unity::Services::Core::Configuration::ProjectConfiguration::__cordl_internal_set_m_ConfigValues(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::Unity::Services::Core::Configuration::ConfigurationEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ConfigValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Internal::Serialization::IJsonSerializer*& Unity::Services::Core::Configuration::ProjectConfiguration::__cordl_internal_get__Serializer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Serializer_k__BackingField;
}
constexpr ::Unity::Services::Core::Internal::Serialization::IJsonSerializer* const& Unity::Services::Core::Configuration::ProjectConfiguration::__cordl_internal_get__Serializer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Serializer_k__BackingField;
}
constexpr void Unity::Services::Core::Configuration::ProjectConfiguration::__cordl_internal_set__Serializer_k__BackingField(::Unity::Services::Core::Internal::Serialization::IJsonSerializer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Serializer_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Core::Configuration::ProjectConfiguration::_ctor(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::Unity::Services::Core::Configuration::ConfigurationEntry*>*  configValues, ::Unity::Services::Core::Internal::Serialization::IJsonSerializer*  serializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::ProjectConfiguration*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::Unity::Services::Core::Configuration::ConfigurationEntry*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::Serialization::IJsonSerializer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, configValues, serializer);
}
inline ::StringW Unity::Services::Core::Configuration::ProjectConfiguration::GetString(::StringW  key, ::StringW  defaultValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::ProjectConfiguration*>::get(),
                        "GetString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key, defaultValue);
}
inline ::Unity::Services::Core::Configuration::ProjectConfiguration* Unity::Services::Core::Configuration::ProjectConfiguration::New_ctor(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::Unity::Services::Core::Configuration::ConfigurationEntry*>*  configValues, ::Unity::Services::Core::Internal::Serialization::IJsonSerializer*  serializer)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Configuration::ProjectConfiguration*>(configValues, serializer));
}
/// @brief Convert operator to "::Unity::Services::Core::Configuration::Internal::IProjectConfiguration"
constexpr  Unity::Services::Core::Configuration::ProjectConfiguration::operator ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*() noexcept {
return static_cast<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Configuration::Internal::IProjectConfiguration"
constexpr ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* Unity::Services::Core::Configuration::ProjectConfiguration::i___Unity__Services__Core__Configuration__Internal__IProjectConfiguration() noexcept {
return static_cast<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr  Unity::Services::Core::Configuration::ProjectConfiguration::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Core::Configuration::ProjectConfiguration::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Configuration::ProjectConfiguration::ProjectConfiguration()   {
}
