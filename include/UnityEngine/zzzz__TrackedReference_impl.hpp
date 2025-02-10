#pragma once
// IWYU pragma private; include "UnityEngine/TrackedReference.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TrackedReference_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::TrackedReference._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TrackedReference::*)()>(&::UnityEngine::TrackedReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f8e4b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TrackedReference*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrackedReference.op_Equality
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::TrackedReference*, ::UnityEngine::TrackedReference*)>(&::UnityEngine::TrackedReference::op_Equality)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f8e4bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TrackedReference*>::get(),
                        "op_Equality",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TrackedReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TrackedReference*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrackedReference.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TrackedReference::*)(::System::Object*)>(&::UnityEngine::TrackedReference::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2f8e510;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TrackedReference*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TrackedReference*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrackedReference.GetHashCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TrackedReference::*)()>(&::UnityEngine::TrackedReference::GetHashCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f8e590;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TrackedReference*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TrackedReference*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::TrackedReference::__cordl_internal_get_m_Ptr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::TrackedReference::__cordl_internal_get_m_Ptr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr void UnityEngine::TrackedReference::__cordl_internal_set_m_Ptr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Ptr = value;
}
inline void UnityEngine::TrackedReference::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TrackedReference*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::TrackedReference::op_Equality(::UnityEngine::TrackedReference*  x, ::UnityEngine::TrackedReference*  y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TrackedReference*>::get(),
                        "op_Equality",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TrackedReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TrackedReference*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, x, y);
}
inline bool UnityEngine::TrackedReference::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TrackedReference*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o);
}
inline int32_t UnityEngine::TrackedReference::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TrackedReference*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::TrackedReference* UnityEngine::TrackedReference::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TrackedReference*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TrackedReference::TrackedReference()   {
}
