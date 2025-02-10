#pragma once
// IWYU pragma private; include "Firebase/Storage/FirebaseStorage.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Storage/zzzz__FirebaseStorage_def.hpp"
#include "Firebase/Storage/Internal/zzzz__ModuleLogger_def.hpp"
#include "Firebase/Storage/zzzz__FirebaseStorageInternal_def.hpp"
#include "Firebase/Storage/zzzz__StorageReference_def.hpp"
#include "Firebase/zzzz__FirebaseApp_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Firebase::Storage::FirebaseStorage._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::FirebaseStorage::*)(::Firebase::Storage::FirebaseStorageInternal*, ::Firebase::FirebaseApp*)>(&::Firebase::Storage::FirebaseStorage::_ctor)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x192c834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::FirebaseStorageInternal*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::FirebaseApp*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::FirebaseStorage.Finalize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::FirebaseStorage::*)()>(&::Firebase::Storage::FirebaseStorage::Finalize)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x192ca20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::FirebaseStorage.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::FirebaseStorage::*)()>(&::Firebase::Storage::FirebaseStorage::Dispose)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x192cb0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::FirebaseStorage.OnAppDisposed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::FirebaseStorage::*)(::System::Object*, ::System::EventArgs*)>(&::Firebase::Storage::FirebaseStorage::OnAppDisposed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x192cd1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        "OnAppDisposed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::FirebaseStorage.ThrowIfNull
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::FirebaseStorage::*)()>(&::Firebase::Storage::FirebaseStorage::ThrowIfNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x192cd94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        "ThrowIfNull",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::FirebaseStorage.get_Logger
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Storage::Internal::ModuleLogger* (::Firebase::Storage::FirebaseStorage::*)()>(&::Firebase::Storage::FirebaseStorage::get_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x192cdf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        "get_Logger",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::FirebaseStorage.set_Logger
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::FirebaseStorage::*)(::Firebase::Storage::Internal::ModuleLogger*)>(&::Firebase::Storage::FirebaseStorage::set_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x192cdfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        "set_Logger",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::Internal::ModuleLogger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::FirebaseStorage.get_DefaultInstance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Storage::FirebaseStorage* (*)()>(&::Firebase::Storage::FirebaseStorage::get_DefaultInstance)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x192bf40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        "get_DefaultInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::FirebaseStorage.get_RootReference
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Storage::StorageReference* (::Firebase::Storage::FirebaseStorage::*)()>(&::Firebase::Storage::FirebaseStorage::get_RootReference)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x192ced4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        "get_RootReference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::FirebaseStorage.GetInstance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Storage::FirebaseStorage* (*)(::Firebase::FirebaseApp*, ::StringW)>(&::Firebase::Storage::FirebaseStorage::GetInstance)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x192ce04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        "GetInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::FirebaseApp*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::FirebaseStorage.FindByKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Storage::FirebaseStorage* (*)(::StringW)>(&::Firebase::Storage::FirebaseStorage::FindByKey)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x192d2c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        "FindByKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::FirebaseStorage.GetInstanceInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Storage::FirebaseStorage* (*)(::Firebase::FirebaseApp*, ::StringW)>(&::Firebase::Storage::FirebaseStorage::GetInstanceInternal)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x192cf50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        "GetInstanceInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::FirebaseApp*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Firebase::Storage::FirebaseStorageInternal*& Firebase::Storage::FirebaseStorage::__cordl_internal_get_storageInternal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storageInternal;
}
constexpr ::Firebase::Storage::FirebaseStorageInternal* const& Firebase::Storage::FirebaseStorage::__cordl_internal_get_storageInternal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storageInternal;
}
constexpr void Firebase::Storage::FirebaseStorage::__cordl_internal_set_storageInternal(::Firebase::Storage::FirebaseStorageInternal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___storageInternal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::FirebaseApp*& Firebase::Storage::FirebaseStorage::__cordl_internal_get_firebaseApp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firebaseApp;
}
constexpr ::Firebase::FirebaseApp* const& Firebase::Storage::FirebaseStorage::__cordl_internal_get_firebaseApp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firebaseApp;
}
constexpr void Firebase::Storage::FirebaseStorage::__cordl_internal_set_firebaseApp(::Firebase::FirebaseApp*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___firebaseApp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Firebase::Storage::FirebaseStorage::__cordl_internal_get_instanceKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceKey;
}
constexpr ::StringW const& Firebase::Storage::FirebaseStorage::__cordl_internal_get_instanceKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceKey;
}
constexpr void Firebase::Storage::FirebaseStorage::__cordl_internal_set_instanceKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___instanceKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Storage::Internal::ModuleLogger*& Firebase::Storage::FirebaseStorage::__cordl_internal_get__Logger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr ::Firebase::Storage::Internal::ModuleLogger* const& Firebase::Storage::FirebaseStorage::__cordl_internal_get__Logger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr void Firebase::Storage::FirebaseStorage::__cordl_internal_set__Logger_k__BackingField(::Firebase::Storage::Internal::ModuleLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Logger_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Storage::FirebaseStorage::setStaticF_storageByInstanceKey(::System::Collections::Generic::Dictionary_2<::StringW,::Firebase::Storage::FirebaseStorage*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Firebase::Storage::FirebaseStorage*>*, "storageByInstanceKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::Firebase::Storage::FirebaseStorage*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Firebase::Storage::FirebaseStorage*>* Firebase::Storage::FirebaseStorage::getStaticF_storageByInstanceKey()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Firebase::Storage::FirebaseStorage*>*, "storageByInstanceKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get>();
}
inline void Firebase::Storage::FirebaseStorage::setStaticF_logger(::Firebase::Storage::Internal::ModuleLogger*  value)  {
::cordl_internals::setStaticField<::Firebase::Storage::Internal::ModuleLogger*, "logger", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get>(std::forward<::Firebase::Storage::Internal::ModuleLogger*>(value));
}
inline ::Firebase::Storage::Internal::ModuleLogger* Firebase::Storage::FirebaseStorage::getStaticF_logger()  {
return ::cordl_internals::getStaticField<::Firebase::Storage::Internal::ModuleLogger*, "logger", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get>();
}
inline void Firebase::Storage::FirebaseStorage::_ctor(::Firebase::Storage::FirebaseStorageInternal*  storage, ::Firebase::FirebaseApp*  app)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::FirebaseStorageInternal*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::FirebaseApp*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, storage, app);
}
inline void Firebase::Storage::FirebaseStorage::Finalize()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::Storage::FirebaseStorage::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::Storage::FirebaseStorage::OnAppDisposed(::System::Object*  sender, ::System::EventArgs*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        "OnAppDisposed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Firebase::Storage::FirebaseStorage::ThrowIfNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        "ThrowIfNull",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Storage::Internal::ModuleLogger* Firebase::Storage::FirebaseStorage::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        "get_Logger",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Storage::Internal::ModuleLogger*, false>(this, ___internal_method);
}
inline void Firebase::Storage::FirebaseStorage::set_Logger(::Firebase::Storage::Internal::ModuleLogger*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        "set_Logger",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::Internal::ModuleLogger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Firebase::Storage::FirebaseStorage* Firebase::Storage::FirebaseStorage::get_DefaultInstance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        "get_DefaultInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Storage::FirebaseStorage*, false>(nullptr, ___internal_method);
}
inline ::Firebase::Storage::StorageReference* Firebase::Storage::FirebaseStorage::get_RootReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        "get_RootReference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Storage::StorageReference*, false>(this, ___internal_method);
}
inline ::Firebase::Storage::FirebaseStorage* Firebase::Storage::FirebaseStorage::GetInstance(::Firebase::FirebaseApp*  app, ::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        "GetInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::FirebaseApp*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Storage::FirebaseStorage*, false>(nullptr, ___internal_method, app, url);
}
inline ::Firebase::Storage::FirebaseStorage* Firebase::Storage::FirebaseStorage::FindByKey(::StringW  instanceKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        "FindByKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Storage::FirebaseStorage*, false>(nullptr, ___internal_method, instanceKey);
}
inline ::Firebase::Storage::FirebaseStorage* Firebase::Storage::FirebaseStorage::GetInstanceInternal(::Firebase::FirebaseApp*  app, ::StringW  bucketUrl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::FirebaseStorage*>::get(),
                        "GetInstanceInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::FirebaseApp*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Storage::FirebaseStorage*, false>(nullptr, ___internal_method, app, bucketUrl);
}
inline ::Firebase::Storage::FirebaseStorage* Firebase::Storage::FirebaseStorage::New_ctor(::Firebase::Storage::FirebaseStorageInternal*  storage, ::Firebase::FirebaseApp*  app)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Storage::FirebaseStorage*>(storage, app));
}
// Ctor Parameters []
constexpr ::Firebase::Storage::FirebaseStorage::FirebaseStorage()   {
}
