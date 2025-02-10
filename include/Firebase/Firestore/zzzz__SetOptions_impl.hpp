#pragma once
// IWYU pragma private; include "Firebase/Firestore/SetOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/zzzz__SetOptions_def.hpp"
#include "Firebase/Firestore/zzzz__FieldPath_def.hpp"
#include "Firebase/Firestore/zzzz__SetOptionsProxy_def.hpp"
#include "Firebase/Firestore/zzzz__SetOptions_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Firebase::Firestore::SetOptions_Type::SetOptions_Type(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::SetOptions_Type::SetOptions_Type()   {
}
constexpr ::Firebase::Firestore::SetOptions_Type  Firebase::Firestore::SetOptions_Type::Overwrite{static_cast<int32_t>(0x0)};
constexpr ::Firebase::Firestore::SetOptions_Type  Firebase::Firestore::SetOptions_Type::Merge{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Firebase::Firestore::SetOptions._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::SetOptions::*)(::Firebase::Firestore::SetOptionsProxy*)>(&::Firebase::Firestore::SetOptions::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1918e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::SetOptionsProxy*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::SetOptions.get_Proxy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::SetOptionsProxy* (::Firebase::Firestore::SetOptions::*)()>(&::Firebase::Firestore::SetOptions::get_Proxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1918ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                        "get_Proxy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::SetOptions.get_Overwrite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::SetOptions* (*)()>(&::Firebase::Firestore::SetOptions::get_Overwrite)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1918718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                        "get_Overwrite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::SetOptions.get_MergeAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::SetOptions* (*)()>(&::Firebase::Firestore::SetOptions::get_MergeAll)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1918f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                        "get_MergeAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::SetOptions.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Firebase::Firestore::SetOptions::*)()>(&::Firebase::Firestore::SetOptions::ToString)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x1918f94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::SetOptions.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Firestore::SetOptions::*)(::System::Object*)>(&::Firebase::Firestore::SetOptions::Equals)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x19191f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::SetOptions.GetHashCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Firebase::Firestore::SetOptions::*)()>(&::Firebase::Firestore::SetOptions::GetHashCode)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x19192d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::SetOptions.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Firestore::SetOptions::*)(::Firebase::Firestore::SetOptions*)>(&::Firebase::Firestore::SetOptions::Equals)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x191925c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::SetOptions*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::SetOptions._ToString_m__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Firebase::Firestore::FieldPath*)>(&::Firebase::Firestore::SetOptions::_ToString_m__1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x19193cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                        "<ToString>m__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FieldPath*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::SetOptions._GetHashCode_m__2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, ::Firebase::Firestore::FieldPath*)>(&::Firebase::Firestore::SetOptions::_GetHashCode_m__2)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x19193e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                        "<GetHashCode>m__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FieldPath*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Firebase::Firestore::SetOptionsProxy*& Firebase::Firestore::SetOptions::__cordl_internal_get__proxy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxy;
}
constexpr ::Firebase::Firestore::SetOptionsProxy* const& Firebase::Firestore::SetOptions::__cordl_internal_get__proxy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxy;
}
constexpr void Firebase::Firestore::SetOptions::__cordl_internal_set__proxy(::Firebase::Firestore::SetOptionsProxy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____proxy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Firestore::SetOptions_Type& Firebase::Firestore::SetOptions::__cordl_internal_get_setType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setType;
}
constexpr ::Firebase::Firestore::SetOptions_Type const& Firebase::Firestore::SetOptions::__cordl_internal_get_setType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setType;
}
constexpr void Firebase::Firestore::SetOptions::__cordl_internal_set_setType(::Firebase::Firestore::SetOptions_Type  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setType = value;
}
constexpr ::ArrayW<::Firebase::Firestore::FieldPath*,::Array<::Firebase::Firestore::FieldPath*>*>& Firebase::Firestore::SetOptions::__cordl_internal_get_fields()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fields;
}
constexpr ::ArrayW<::Firebase::Firestore::FieldPath*,::Array<::Firebase::Firestore::FieldPath*>*> const& Firebase::Firestore::SetOptions::__cordl_internal_get_fields() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fields;
}
constexpr void Firebase::Firestore::SetOptions::__cordl_internal_set_fields(::ArrayW<::Firebase::Firestore::FieldPath*,::Array<::Firebase::Firestore::FieldPath*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fields)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Firestore::SetOptions::setStaticF___f__am$cache1(::System::Func_2<::Firebase::Firestore::FieldPath*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Firebase::Firestore::FieldPath*,::StringW>*, "<>f__am$cache1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get>(std::forward<::System::Func_2<::Firebase::Firestore::FieldPath*,::StringW>*>(value));
}
inline ::System::Func_2<::Firebase::Firestore::FieldPath*,::StringW>* Firebase::Firestore::SetOptions::getStaticF___f__am$cache1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Firebase::Firestore::FieldPath*,::StringW>*, "<>f__am$cache1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get>();
}
inline void Firebase::Firestore::SetOptions::setStaticF___f__am$cache2(::System::Func_3<int32_t,::Firebase::Firestore::FieldPath*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<int32_t,::Firebase::Firestore::FieldPath*,int32_t>*, "<>f__am$cache2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get>(std::forward<::System::Func_3<int32_t,::Firebase::Firestore::FieldPath*,int32_t>*>(value));
}
inline ::System::Func_3<int32_t,::Firebase::Firestore::FieldPath*,int32_t>* Firebase::Firestore::SetOptions::getStaticF___f__am$cache2()  {
return ::cordl_internals::getStaticField<::System::Func_3<int32_t,::Firebase::Firestore::FieldPath*,int32_t>*, "<>f__am$cache2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get>();
}
inline void Firebase::Firestore::SetOptions::_ctor(::Firebase::Firestore::SetOptionsProxy*  proxy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::SetOptionsProxy*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, proxy);
}
inline ::Firebase::Firestore::SetOptionsProxy* Firebase::Firestore::SetOptions::get_Proxy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                        "get_Proxy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::SetOptionsProxy*, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::SetOptions* Firebase::Firestore::SetOptions::get_Overwrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                        "get_Overwrite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::SetOptions*, false>(nullptr, ___internal_method);
}
inline ::Firebase::Firestore::SetOptions* Firebase::Firestore::SetOptions::get_MergeAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                        "get_MergeAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::SetOptions*, false>(nullptr, ___internal_method);
}
inline ::StringW Firebase::Firestore::SetOptions::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Firebase::Firestore::SetOptions::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t Firebase::Firestore::SetOptions::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Firebase::Firestore::SetOptions::Equals(::Firebase::Firestore::SetOptions*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::SetOptions*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::StringW Firebase::Firestore::SetOptions::_ToString_m__1(::Firebase::Firestore::FieldPath*  f)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                        "<ToString>m__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FieldPath*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, f);
}
inline int32_t Firebase::Firestore::SetOptions::_GetHashCode_m__2(int32_t  current, ::Firebase::Firestore::FieldPath*  f)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptions*>::get(),
                        "<GetHashCode>m__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FieldPath*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, current, f);
}
inline ::Firebase::Firestore::SetOptions* Firebase::Firestore::SetOptions::New_ctor(::Firebase::Firestore::SetOptionsProxy*  proxy)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::SetOptions*>(proxy));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::SetOptions::SetOptions()   {
}
