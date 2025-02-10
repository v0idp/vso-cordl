#pragma once
// IWYU pragma private; include "Unity/Services/Core/Configuration/SerializableProjectConfiguration.hpp"
#include "Unity/Services/Core/Configuration/zzzz__SerializableProjectConfiguration_def.hpp"
#include "Unity/Services/Core/Configuration/zzzz__ConfigurationEntry_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Configuration::SerializableProjectConfiguration.get_Empty
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Configuration::SerializableProjectConfiguration (*)()>(&::Unity::Services::Core::Configuration::SerializableProjectConfiguration::get_Empty)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2e9b084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>::get(),
                        "get_Empty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Services::Core::Configuration::SerializableProjectConfiguration Unity::Services::Core::Configuration::SerializableProjectConfiguration::get_Empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>::get(),
                        "get_Empty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Configuration::SerializableProjectConfiguration, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Keys", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Values", ty: "::ArrayW<::Unity::Services::Core::Configuration::ConfigurationEntry*,::Array<::Unity::Services::Core::Configuration::ConfigurationEntry*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Configuration::SerializableProjectConfiguration::SerializableProjectConfiguration(::ArrayW<::StringW,::Array<::StringW>*>  Keys, ::ArrayW<::Unity::Services::Core::Configuration::ConfigurationEntry*,::Array<::Unity::Services::Core::Configuration::ConfigurationEntry*>*>  Values) noexcept  {
this->Keys = Keys;
this->Values = Values;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Configuration::SerializableProjectConfiguration::SerializableProjectConfiguration()   {
}
