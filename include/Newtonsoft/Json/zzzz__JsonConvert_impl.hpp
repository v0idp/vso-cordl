#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonConvert.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonConvert_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializerSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.get_DefaultSettings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* (*)()>(&::Newtonsoft::Json::JsonConvert::get_DefaultSettings)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27cbee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "get_DefaultSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(bool)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27cbf40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(char16_t)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x27cbfac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(float_t, ::Newtonsoft::Json::FloatFormatHandling, char16_t, bool)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x27cc090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::FloatFormatHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.EnsureFloatFormat
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(double_t, ::StringW, ::Newtonsoft::Json::FloatFormatHandling, char16_t, bool)>(&::Newtonsoft::Json::JsonConvert::EnsureFloatFormat)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x27cc244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "EnsureFloatFormat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::FloatFormatHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(double_t, ::Newtonsoft::Json::FloatFormatHandling, char16_t, bool)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x27cc368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::FloatFormatHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.EnsureDecimalPlace
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(double_t, ::StringW)>(&::Newtonsoft::Json::JsonConvert::EnsureDecimalPlace)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27cc180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "EnsureDecimalPlace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.EnsureDecimalPlace
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Newtonsoft::Json::JsonConvert::EnsureDecimalPlace)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x27cc454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "EnsureDecimalPlace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Decimal)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x27cc4c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27cc038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, char16_t)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27cc5bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, char16_t, ::Newtonsoft::Json::StringEscapeHandling)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x27cc624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*)>(&::Newtonsoft::Json::JsonConvert::SerializeObject)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x27cc708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "SerializeObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*, ::Newtonsoft::Json::JsonSerializerSettings*)>(&::Newtonsoft::Json::JsonConvert::SerializeObject)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27cc7e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "SerializeObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializerSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::JsonSerializerSettings*)>(&::Newtonsoft::Json::JsonConvert::SerializeObject)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x27cc764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "SerializeObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializerSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeObjectInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::JsonSerializer*)>(&::Newtonsoft::Json::JsonConvert::SerializeObjectInternal)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x27cc87c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "SerializeObjectInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonConvert::setStaticF__DefaultSettings_k__BackingField(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*, "<DefaultSettings>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get>(std::forward<::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*>(value));
}
inline ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* Newtonsoft::Json::JsonConvert::getStaticF__DefaultSettings_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*, "<DefaultSettings>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get>();
}
inline void Newtonsoft::Json::JsonConvert::setStaticF_True(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "True", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Newtonsoft::Json::JsonConvert::getStaticF_True()  {
return ::cordl_internals::getStaticField<::StringW, "True", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get>();
}
inline void Newtonsoft::Json::JsonConvert::setStaticF_False(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "False", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Newtonsoft::Json::JsonConvert::getStaticF_False()  {
return ::cordl_internals::getStaticField<::StringW, "False", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get>();
}
inline void Newtonsoft::Json::JsonConvert::setStaticF_Null(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Newtonsoft::Json::JsonConvert::getStaticF_Null()  {
return ::cordl_internals::getStaticField<::StringW, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get>();
}
inline void Newtonsoft::Json::JsonConvert::setStaticF_Undefined(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "Undefined", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Newtonsoft::Json::JsonConvert::getStaticF_Undefined()  {
return ::cordl_internals::getStaticField<::StringW, "Undefined", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get>();
}
inline void Newtonsoft::Json::JsonConvert::setStaticF_PositiveInfinity(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "PositiveInfinity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Newtonsoft::Json::JsonConvert::getStaticF_PositiveInfinity()  {
return ::cordl_internals::getStaticField<::StringW, "PositiveInfinity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get>();
}
inline void Newtonsoft::Json::JsonConvert::setStaticF_NegativeInfinity(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "NegativeInfinity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Newtonsoft::Json::JsonConvert::getStaticF_NegativeInfinity()  {
return ::cordl_internals::getStaticField<::StringW, "NegativeInfinity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get>();
}
inline void Newtonsoft::Json::JsonConvert::setStaticF_NaN(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "NaN", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Newtonsoft::Json::JsonConvert::getStaticF_NaN()  {
return ::cordl_internals::getStaticField<::StringW, "NaN", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get>();
}
inline ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* Newtonsoft::Json::JsonConvert::get_DefaultSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "get_DefaultSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*, false>(nullptr, ___internal_method);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(float_t  value, ::Newtonsoft::Json::FloatFormatHandling  floatFormatHandling, char16_t  quoteChar, bool  nullable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::FloatFormatHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, floatFormatHandling, quoteChar, nullable);
}
inline ::StringW Newtonsoft::Json::JsonConvert::EnsureFloatFormat(double_t  value, ::StringW  text, ::Newtonsoft::Json::FloatFormatHandling  floatFormatHandling, char16_t  quoteChar, bool  nullable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "EnsureFloatFormat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::FloatFormatHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, text, floatFormatHandling, quoteChar, nullable);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(double_t  value, ::Newtonsoft::Json::FloatFormatHandling  floatFormatHandling, char16_t  quoteChar, bool  nullable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::FloatFormatHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, floatFormatHandling, quoteChar, nullable);
}
inline ::StringW Newtonsoft::Json::JsonConvert::EnsureDecimalPlace(double_t  value, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "EnsureDecimalPlace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, text);
}
inline ::StringW Newtonsoft::Json::JsonConvert::EnsureDecimalPlace(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "EnsureDecimalPlace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, text);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(::StringW  value, char16_t  delimiter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, delimiter);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(::StringW  value, char16_t  delimiter, ::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, delimiter, stringEscapeHandling);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeObject(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "SerializeObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeObject(::System::Object*  value, ::Newtonsoft::Json::JsonSerializerSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "SerializeObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializerSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, settings);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeObject(::System::Object*  value, ::System::Type*  type, ::Newtonsoft::Json::JsonSerializerSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "SerializeObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializerSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, type, settings);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeObjectInternal(::System::Object*  value, ::System::Type*  type, ::Newtonsoft::Json::JsonSerializer*  jsonSerializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConvert*>::get(),
                        "SerializeObjectInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, type, jsonSerializer);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonConvert::JsonConvert()   {
}
