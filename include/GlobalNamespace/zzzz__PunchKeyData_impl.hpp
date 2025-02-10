#pragma once
// IWYU pragma private; include "GlobalNamespace/PunchKeyData.hpp"
#include "GlobalNamespace/zzzz__Key_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PunchKeyData_def.hpp"
#include "GlobalNamespace/zzzz__Key_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PunchKeyData.get_KeyType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::Key_Type (::GlobalNamespace::PunchKeyData::*)()>(&::GlobalNamespace::PunchKeyData::get_KeyType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16babf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PunchKeyData*>::get(),
                        "get_KeyType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PunchKeyData.get_KeyCapChar
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PunchKeyData::*)()>(&::GlobalNamespace::PunchKeyData::get_KeyCapChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16bac00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PunchKeyData*>::get(),
                        "get_KeyCapChar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PunchKeyData.get_AlterateKeyCapChar
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PunchKeyData::*)()>(&::GlobalNamespace::PunchKeyData::get_AlterateKeyCapChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16bac08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PunchKeyData*>::get(),
                        "get_AlterateKeyCapChar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PunchKeyData.Set
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PunchKeyData::*)(::GlobalNamespace::Key_Type, ::StringW, ::StringW)>(&::GlobalNamespace::PunchKeyData::Set)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16bac10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PunchKeyData*>::get(),
                        "Set",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Key_Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PunchKeyData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PunchKeyData::*)()>(&::GlobalNamespace::PunchKeyData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16bac1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PunchKeyData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::Key_Type& GlobalNamespace::PunchKeyData::__cordl_internal_get__keyType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyType;
}
constexpr ::GlobalNamespace::Key_Type const& GlobalNamespace::PunchKeyData::__cordl_internal_get__keyType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyType;
}
constexpr void GlobalNamespace::PunchKeyData::__cordl_internal_set__keyType(::GlobalNamespace::Key_Type  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____keyType = value;
}
constexpr ::StringW& GlobalNamespace::PunchKeyData::__cordl_internal_get__keyCapChar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyCapChar;
}
constexpr ::StringW const& GlobalNamespace::PunchKeyData::__cordl_internal_get__keyCapChar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyCapChar;
}
constexpr void GlobalNamespace::PunchKeyData::__cordl_internal_set__keyCapChar(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keyCapChar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PunchKeyData::__cordl_internal_get__alterateKeyCapChar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alterateKeyCapChar;
}
constexpr ::StringW const& GlobalNamespace::PunchKeyData::__cordl_internal_get__alterateKeyCapChar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alterateKeyCapChar;
}
constexpr void GlobalNamespace::PunchKeyData::__cordl_internal_set__alterateKeyCapChar(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____alterateKeyCapChar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::Key_Type GlobalNamespace::PunchKeyData::get_KeyType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PunchKeyData*>::get(),
                        "get_KeyType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Key_Type, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PunchKeyData::get_KeyCapChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PunchKeyData*>::get(),
                        "get_KeyCapChar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PunchKeyData::get_AlterateKeyCapChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PunchKeyData*>::get(),
                        "get_AlterateKeyCapChar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::PunchKeyData::Set(::GlobalNamespace::Key_Type  keyType, ::StringW  keyCapChar, ::StringW  alterateKeyCapChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PunchKeyData*>::get(),
                        "Set",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Key_Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyType, keyCapChar, alterateKeyCapChar);
}
inline void GlobalNamespace::PunchKeyData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PunchKeyData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PunchKeyData* GlobalNamespace::PunchKeyData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PunchKeyData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PunchKeyData::PunchKeyData()   {
}
