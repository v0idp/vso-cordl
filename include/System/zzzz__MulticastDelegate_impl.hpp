#pragma once
// IWYU pragma private; include "System/MulticastDelegate.hpp"
#include "System/zzzz__Delegate_impl.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::MulticastDelegate.GetObjectData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::MulticastDelegate::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::MulticastDelegate::GetObjectData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2794fcc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MulticastDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MulticastDelegate*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MulticastDelegate.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::MulticastDelegate::*)(::System::Object*)>(&::System::MulticastDelegate::Equals)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2794fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MulticastDelegate*>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MulticastDelegate.GetHashCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::MulticastDelegate::*)()>(&::System::MulticastDelegate::GetHashCode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x279512c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MulticastDelegate*>::get(),
                        "GetHashCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MulticastDelegate.GetMethodImpl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::System::MulticastDelegate::*)()>(&::System::MulticastDelegate::GetMethodImpl)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2795130;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MulticastDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MulticastDelegate*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MulticastDelegate.GetInvocationList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Delegate*,::Array<::System::Delegate*>*> (::System::MulticastDelegate::*)()>(&::System::MulticastDelegate::GetInvocationList)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2795178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MulticastDelegate*>::get(),
                        "GetInvocationList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MulticastDelegate.CombineImpl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (::System::MulticastDelegate::*)(::System::Delegate*)>(&::System::MulticastDelegate::CombineImpl)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x2795244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MulticastDelegate*>::get(),
                        "CombineImpl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MulticastDelegate.LastIndexOf
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::MulticastDelegate::*)(::ArrayW<::System::Delegate*,::Array<::System::Delegate*>*>, ::ArrayW<::System::Delegate*,::Array<::System::Delegate*>*>)>(&::System::MulticastDelegate::LastIndexOf)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x27954ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MulticastDelegate*>::get(),
                        "LastIndexOf",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Delegate*,::Array<::System::Delegate*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Delegate*,::Array<::System::Delegate*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MulticastDelegate.RemoveImpl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (::System::MulticastDelegate::*)(::System::Delegate*)>(&::System::MulticastDelegate::RemoveImpl)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x27955d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MulticastDelegate*>::get(),
                        "RemoveImpl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Delegate*,::Array<::System::Delegate*>*>& System::MulticastDelegate::__cordl_internal_get_delegates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delegates;
}
constexpr ::ArrayW<::System::Delegate*,::Array<::System::Delegate*>*> const& System::MulticastDelegate::__cordl_internal_get_delegates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delegates;
}
constexpr void System::MulticastDelegate::__cordl_internal_set_delegates(::ArrayW<::System::Delegate*,::Array<::System::Delegate*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___delegates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::MulticastDelegate::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MulticastDelegate*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline bool System::MulticastDelegate::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MulticastDelegate*>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::MulticastDelegate::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MulticastDelegate*>::get(),
                        "GetHashCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::MulticastDelegate::GetMethodImpl()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MulticastDelegate*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Delegate*,::Array<::System::Delegate*>*> System::MulticastDelegate::GetInvocationList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MulticastDelegate*>::get(),
                        "GetInvocationList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Delegate*,::Array<::System::Delegate*>*>, false>(this, ___internal_method);
}
inline ::System::Delegate* System::MulticastDelegate::CombineImpl(::System::Delegate*  follow)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MulticastDelegate*>::get(),
                        "CombineImpl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(this, ___internal_method, follow);
}
inline int32_t System::MulticastDelegate::LastIndexOf(::ArrayW<::System::Delegate*,::Array<::System::Delegate*>*>  haystack, ::ArrayW<::System::Delegate*,::Array<::System::Delegate*>*>  needle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MulticastDelegate*>::get(),
                        "LastIndexOf",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Delegate*,::Array<::System::Delegate*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Delegate*,::Array<::System::Delegate*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, haystack, needle);
}
inline ::System::Delegate* System::MulticastDelegate::RemoveImpl(::System::Delegate*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MulticastDelegate*>::get(),
                        "RemoveImpl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::MulticastDelegate::MulticastDelegate()   {
}
