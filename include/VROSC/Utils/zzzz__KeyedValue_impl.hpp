#pragma once
// IWYU pragma private; include "VROSC/Utils/KeyedValue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/Utils/zzzz__KeyedValue_def.hpp"
//  Writing Method size for method: ::VROSC::Utils::KeyedValue.get_HasKeys
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::Utils::KeyedValue::*)()>(&::VROSC::Utils::KeyedValue::get_HasKeys)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x17dbdfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Utils::KeyedValue*>::get(),
                        "get_HasKeys",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Utils::KeyedValue._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Utils::KeyedValue::*)(float_t)>(&::VROSC::Utils::KeyedValue::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x17dbe20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Utils::KeyedValue*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Utils::KeyedValue._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Utils::KeyedValue::*)(::VROSC::Utils::KeyedValue*)>(&::VROSC::Utils::KeyedValue::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x17dbecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Utils::KeyedValue*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Utils::KeyedValue*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Utils::KeyedValue.SetKeys
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Utils::KeyedValue::*)(::ArrayW<float_t,::Array<float_t>*>)>(&::VROSC::Utils::KeyedValue::SetKeys)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x17dbf44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Utils::KeyedValue*>::get(),
                        "SetKeys",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Utils::KeyedValue.GetValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::Utils::KeyedValue::*)(float_t)>(&::VROSC::Utils::KeyedValue::GetValue)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x17dc004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Utils::KeyedValue*>::get(),
                        "GetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t,::Array<float_t>*>& VROSC::Utils::KeyedValue::__cordl_internal_get_Keys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Keys;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& VROSC::Utils::KeyedValue::__cordl_internal_get_Keys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Keys;
}
constexpr void VROSC::Utils::KeyedValue::__cordl_internal_set_Keys(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Keys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool VROSC::Utils::KeyedValue::get_HasKeys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Utils::KeyedValue*>::get(),
                        "get_HasKeys",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::Utils::KeyedValue::_ctor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Utils::KeyedValue*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::Utils::KeyedValue::_ctor(::VROSC::Utils::KeyedValue*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Utils::KeyedValue*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Utils::KeyedValue*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline void VROSC::Utils::KeyedValue::SetKeys(::ArrayW<float_t,::Array<float_t>*>  keys)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Utils::KeyedValue*>::get(),
                        "SetKeys",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keys);
}
inline float_t VROSC::Utils::KeyedValue::GetValue(float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Utils::KeyedValue*>::get(),
                        "GetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, progress);
}
inline ::VROSC::Utils::KeyedValue* VROSC::Utils::KeyedValue::New_ctor(float_t  value)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Utils::KeyedValue*>(value));
}
inline ::VROSC::Utils::KeyedValue* VROSC::Utils::KeyedValue::New_ctor(::VROSC::Utils::KeyedValue*  other)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Utils::KeyedValue*>(other));
}
// Ctor Parameters []
constexpr ::VROSC::Utils::KeyedValue::KeyedValue()   {
}
