#pragma once
// IWYU pragma private; include "Firebase/Firestore/DeserializationContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/zzzz__DeserializationContext_def.hpp"
#include "Firebase/Firestore/Converters/zzzz__IFirestoreInternalConverter_def.hpp"
#include "Firebase/Firestore/zzzz__DocumentReference_def.hpp"
#include "Firebase/Firestore/zzzz__DocumentSnapshot_def.hpp"
#include "Firebase/Firestore/zzzz__FirebaseFirestore_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::DeserializationContext._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::DeserializationContext::*)(::Firebase::Firestore::DocumentSnapshot*)>(&::Firebase::Firestore::DeserializationContext::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x190ef7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DeserializationContext*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentSnapshot*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DeserializationContext.get_Firestore
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FirebaseFirestore* (::Firebase::Firestore::DeserializationContext::*)()>(&::Firebase::Firestore::DeserializationContext::get_Firestore)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x190effc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DeserializationContext*>::get(),
                        "get_Firestore",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DeserializationContext.get_DocumentReference
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::DocumentReference* (::Firebase::Firestore::DeserializationContext::*)()>(&::Firebase::Firestore::DeserializationContext::get_DocumentReference)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x190f020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DeserializationContext*>::get(),
                        "get_DocumentReference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DeserializationContext.GetConverter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::Converters::IFirestoreInternalConverter* (::Firebase::Firestore::DeserializationContext::*)(::System::Type*)>(&::Firebase::Firestore::DeserializationContext::GetConverter)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x190e90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DeserializationContext*>::get(),
                        "GetConverter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Firebase::Firestore::DocumentSnapshot*& Firebase::Firestore::DeserializationContext::__cordl_internal_get_Snapshot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Snapshot;
}
constexpr ::Firebase::Firestore::DocumentSnapshot* const& Firebase::Firestore::DeserializationContext::__cordl_internal_get_Snapshot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Snapshot;
}
constexpr void Firebase::Firestore::DeserializationContext::__cordl_internal_set_Snapshot(::Firebase::Firestore::DocumentSnapshot*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Snapshot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Firestore::DeserializationContext::_ctor(::Firebase::Firestore::DocumentSnapshot*  snapshot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DeserializationContext*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentSnapshot*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, snapshot);
}
inline ::Firebase::Firestore::FirebaseFirestore* Firebase::Firestore::DeserializationContext::get_Firestore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DeserializationContext*>::get(),
                        "get_Firestore",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FirebaseFirestore*, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::DocumentReference* Firebase::Firestore::DeserializationContext::get_DocumentReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DeserializationContext*>::get(),
                        "get_DocumentReference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::DocumentReference*, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::Converters::IFirestoreInternalConverter* Firebase::Firestore::DeserializationContext::GetConverter(::System::Type*  targetType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DeserializationContext*>::get(),
                        "GetConverter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::Converters::IFirestoreInternalConverter*, false>(this, ___internal_method, targetType);
}
inline ::Firebase::Firestore::DeserializationContext* Firebase::Firestore::DeserializationContext::New_ctor(::Firebase::Firestore::DocumentSnapshot*  snapshot)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::DeserializationContext*>(snapshot));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::DeserializationContext::DeserializationContext()   {
}
