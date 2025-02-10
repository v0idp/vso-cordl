#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/Serialization/NewtonsoftSerializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/Serialization/zzzz__IJsonSerializer_impl.hpp"
#include "Unity/Services/Core/Internal/Serialization/zzzz__NewtonsoftSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializerSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer::*)(::Newtonsoft::Json::JsonSerializerSettings*)>(&::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2ea4170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializerSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer::*)(::Newtonsoft::Json::JsonSerializer*)>(&::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ea41a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::JsonSerializer*& Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer::__cordl_internal_get_m_Serializer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Serializer;
}
constexpr ::Newtonsoft::Json::JsonSerializer* const& Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer::__cordl_internal_get_m_Serializer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Serializer;
}
constexpr void Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer::__cordl_internal_set_m_Serializer(::Newtonsoft::Json::JsonSerializer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Serializer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer::_ctor(::Newtonsoft::Json::JsonSerializerSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializerSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline void Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer::_ctor(::Newtonsoft::Json::JsonSerializer*  serializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializer);
}
template<typename T>
inline T Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer::DeserializeObject(::StringW  value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer*>::get(),
                    "DeserializeObject",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer* Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer::New_ctor(::Newtonsoft::Json::JsonSerializerSettings*  settings)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer*>(settings));
}
inline ::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer* Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer::New_ctor(::Newtonsoft::Json::JsonSerializer*  serializer)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer*>(serializer));
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::Serialization::IJsonSerializer"
constexpr  Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer::operator ::Unity::Services::Core::Internal::Serialization::IJsonSerializer*() noexcept {
return static_cast<::Unity::Services::Core::Internal::Serialization::IJsonSerializer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::Serialization::IJsonSerializer"
constexpr ::Unity::Services::Core::Internal::Serialization::IJsonSerializer* Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer::i___Unity__Services__Core__Internal__Serialization__IJsonSerializer() noexcept {
return static_cast<::Unity::Services::Core::Internal::Serialization::IJsonSerializer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer::NewtonsoftSerializer()   {
}
