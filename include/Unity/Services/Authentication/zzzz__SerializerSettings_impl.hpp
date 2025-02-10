#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/SerializerSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__SerializerSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializerSettings_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::SerializerSettings.get_DefaultSerializerSettings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonSerializerSettings* (*)()>(&::Unity::Services::Authentication::SerializerSettings::get_DefaultSerializerSettings)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2e9769c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::SerializerSettings*>::get(),
                        "get_DefaultSerializerSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Authentication::SerializerSettings::setStaticF_s_Instance(::Newtonsoft::Json::JsonSerializerSettings*  value)  {
::cordl_internals::setStaticField<::Newtonsoft::Json::JsonSerializerSettings*, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::SerializerSettings*>::get>(std::forward<::Newtonsoft::Json::JsonSerializerSettings*>(value));
}
inline ::Newtonsoft::Json::JsonSerializerSettings* Unity::Services::Authentication::SerializerSettings::getStaticF_s_Instance()  {
return ::cordl_internals::getStaticField<::Newtonsoft::Json::JsonSerializerSettings*, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::SerializerSettings*>::get>();
}
inline ::Newtonsoft::Json::JsonSerializerSettings* Unity::Services::Authentication::SerializerSettings::get_DefaultSerializerSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::SerializerSettings*>::get(),
                        "get_DefaultSerializerSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonSerializerSettings*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::SerializerSettings::SerializerSettings()   {
}
