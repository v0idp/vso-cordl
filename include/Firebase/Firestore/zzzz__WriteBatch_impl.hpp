#pragma once
// IWYU pragma private; include "Firebase/Firestore/WriteBatch.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/zzzz__WriteBatch_def.hpp"
#include "Firebase/Firestore/zzzz__DocumentReference_def.hpp"
#include "Firebase/Firestore/zzzz__FieldValueProxy_def.hpp"
#include "Firebase/Firestore/zzzz__SetOptions_def.hpp"
#include "Firebase/Firestore/zzzz__WriteBatchProxy_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::WriteBatch._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::WriteBatch::*)(::Firebase::Firestore::WriteBatchProxy*)>(&::Firebase::Firestore::WriteBatch::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x191828c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::WriteBatch*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::WriteBatchProxy*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::WriteBatch.Delete
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::WriteBatch* (::Firebase::Firestore::WriteBatch::*)(::Firebase::Firestore::DocumentReference*)>(&::Firebase::Firestore::WriteBatch::Delete)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x19182f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::WriteBatch*>::get(),
                        "Delete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReference*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::WriteBatch.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::WriteBatch* (::Firebase::Firestore::WriteBatch::*)(::Firebase::Firestore::DocumentReference*, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*)>(&::Firebase::Firestore::WriteBatch::Update)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x191838c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::WriteBatch*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::WriteBatch.ConvertToFieldValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (::Firebase::Firestore::WriteBatch::*)(::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*)>(&::Firebase::Firestore::WriteBatch::ConvertToFieldValue)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x191846c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::WriteBatch*>::get(),
                        "ConvertToFieldValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::WriteBatch.Set
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::WriteBatch* (::Firebase::Firestore::WriteBatch::*)(::Firebase::Firestore::DocumentReference*, ::System::Object*, ::Firebase::Firestore::SetOptions*)>(&::Firebase::Firestore::WriteBatch::Set)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x1918520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::WriteBatch*>::get(),
                        "Set",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::SetOptions*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::WriteBatch.CommitAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Firebase::Firestore::WriteBatch::*)()>(&::Firebase::Firestore::WriteBatch::CommitAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x19187c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::WriteBatch*>::get(),
                        "CommitAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Firebase::Firestore::WriteBatchProxy*& Firebase::Firestore::WriteBatch::__cordl_internal_get__proxy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxy;
}
constexpr ::Firebase::Firestore::WriteBatchProxy* const& Firebase::Firestore::WriteBatch::__cordl_internal_get__proxy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxy;
}
constexpr void Firebase::Firestore::WriteBatch::__cordl_internal_set__proxy(::Firebase::Firestore::WriteBatchProxy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____proxy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Firestore::WriteBatch::_ctor(::Firebase::Firestore::WriteBatchProxy*  proxy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::WriteBatch*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::WriteBatchProxy*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, proxy);
}
inline ::Firebase::Firestore::WriteBatch* Firebase::Firestore::WriteBatch::Delete(::Firebase::Firestore::DocumentReference*  documentReference)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::WriteBatch*>::get(),
                        "Delete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReference*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::WriteBatch*, false>(this, ___internal_method, documentReference);
}
inline ::Firebase::Firestore::WriteBatch* Firebase::Firestore::WriteBatch::Update(::Firebase::Firestore::DocumentReference*  documentReference, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  updates)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::WriteBatch*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::WriteBatch*, false>(this, ___internal_method, documentReference, updates);
}
inline ::Firebase::Firestore::FieldValueProxy* Firebase::Firestore::WriteBatch::ConvertToFieldValue(::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  updates)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::WriteBatch*>::get(),
                        "ConvertToFieldValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy*, false>(this, ___internal_method, updates);
}
inline ::Firebase::Firestore::WriteBatch* Firebase::Firestore::WriteBatch::Set(::Firebase::Firestore::DocumentReference*  documentReference, ::System::Object*  documentData, ::Firebase::Firestore::SetOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::WriteBatch*>::get(),
                        "Set",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::SetOptions*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::WriteBatch*, false>(this, ___internal_method, documentReference, documentData, options);
}
inline ::System::Threading::Tasks::Task* Firebase::Firestore::WriteBatch::CommitAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::WriteBatch*>::get(),
                        "CommitAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::WriteBatch* Firebase::Firestore::WriteBatch::New_ctor(::Firebase::Firestore::WriteBatchProxy*  proxy)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::WriteBatch*>(proxy));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::WriteBatch::WriteBatch()   {
}
