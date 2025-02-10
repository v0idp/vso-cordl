#pragma once
// IWYU pragma private; include "Firebase/Storage/FirebaseStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FirebaseStorage)
namespace Firebase::Storage::Internal {
class ModuleLogger;
}
namespace Firebase::Storage {
class FirebaseStorageInternal;
}
namespace Firebase::Storage {
class StorageReference;
}
namespace Firebase {
class FirebaseApp;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class EventArgs;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Storage {
class FirebaseStorage;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Storage::FirebaseStorage);
// Dependencies System.Object
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.FirebaseStorage
class CORDL_TYPE FirebaseStorage : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Logger, put=set_Logger)) ::Firebase::Storage::Internal::ModuleLogger*  Logger;

 __declspec(property(get=get_RootReference)) ::Firebase::Storage::StorageReference*  RootReference;

/// @brief Field <Logger>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logger_k__BackingField, put=__cordl_internal_set__Logger_k__BackingField)) ::Firebase::Storage::Internal::ModuleLogger*  _Logger_k__BackingField;

/// @brief Field firebaseApp, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_firebaseApp, put=__cordl_internal_set_firebaseApp)) ::Firebase::FirebaseApp*  firebaseApp;

/// @brief Field instanceKey, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_instanceKey, put=__cordl_internal_set_instanceKey)) ::StringW  instanceKey;

/// @brief Field logger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_logger, put=setStaticF_logger)) ::Firebase::Storage::Internal::ModuleLogger*  logger;

/// @brief Field storageByInstanceKey, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_storageByInstanceKey, put=setStaticF_storageByInstanceKey)) ::System::Collections::Generic::Dictionary_2<::StringW,::Firebase::Storage::FirebaseStorage*>*  storageByInstanceKey;

/// @brief Field storageInternal, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_storageInternal, put=__cordl_internal_set_storageInternal)) ::Firebase::Storage::FirebaseStorageInternal*  storageInternal;

/// @brief Method Dispose, addr 0x192cb0c, size 0x210, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0x192ca20, size 0xec, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method FindByKey, addr 0x192d2c8, size 0x19c, virtual false, abstract: false, final false
static inline ::Firebase::Storage::FirebaseStorage* FindByKey(::StringW  instanceKey) ;

/// @brief Method GetInstance, addr 0x192ce04, size 0xd0, virtual false, abstract: false, final false
static inline ::Firebase::Storage::FirebaseStorage* GetInstance(::Firebase::FirebaseApp*  app, ::StringW  url) ;

/// @brief Method GetInstanceInternal, addr 0x192cf50, size 0x378, virtual false, abstract: false, final false
static inline ::Firebase::Storage::FirebaseStorage* GetInstanceInternal(::Firebase::FirebaseApp*  app, ::StringW  bucketUrl) ;

static inline ::Firebase::Storage::FirebaseStorage* New_ctor(::Firebase::Storage::FirebaseStorageInternal*  storage, ::Firebase::FirebaseApp*  app) ;

/// @brief Method OnAppDisposed, addr 0x192cd1c, size 0x78, virtual false, abstract: false, final false
inline void OnAppDisposed(::System::Object*  sender, ::System::EventArgs*  eventArgs) ;

/// @brief Method ThrowIfNull, addr 0x192cd94, size 0x60, virtual false, abstract: false, final false
inline void ThrowIfNull() ;

constexpr ::Firebase::Storage::Internal::ModuleLogger* const& __cordl_internal_get__Logger_k__BackingField() const;

constexpr ::Firebase::Storage::Internal::ModuleLogger*& __cordl_internal_get__Logger_k__BackingField() ;

constexpr ::Firebase::FirebaseApp* const& __cordl_internal_get_firebaseApp() const;

constexpr ::Firebase::FirebaseApp*& __cordl_internal_get_firebaseApp() ;

constexpr ::StringW const& __cordl_internal_get_instanceKey() const;

constexpr ::StringW& __cordl_internal_get_instanceKey() ;

constexpr ::Firebase::Storage::FirebaseStorageInternal* const& __cordl_internal_get_storageInternal() const;

constexpr ::Firebase::Storage::FirebaseStorageInternal*& __cordl_internal_get_storageInternal() ;

constexpr void __cordl_internal_set__Logger_k__BackingField(::Firebase::Storage::Internal::ModuleLogger*  value) ;

constexpr void __cordl_internal_set_firebaseApp(::Firebase::FirebaseApp*  value) ;

constexpr void __cordl_internal_set_instanceKey(::StringW  value) ;

constexpr void __cordl_internal_set_storageInternal(::Firebase::Storage::FirebaseStorageInternal*  value) ;

/// @brief Method .ctor, addr 0x192c834, size 0x1ec, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Storage::FirebaseStorageInternal*  storage, ::Firebase::FirebaseApp*  app) ;

static inline ::Firebase::Storage::Internal::ModuleLogger* getStaticF_logger() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Firebase::Storage::FirebaseStorage*>* getStaticF_storageByInstanceKey() ;

/// @brief Method get_DefaultInstance, addr 0x192bf40, size 0x88, virtual false, abstract: false, final false
static inline ::Firebase::Storage::FirebaseStorage* get_DefaultInstance() ;

/// @brief Method get_Logger, addr 0x192cdf4, size 0x8, virtual false, abstract: false, final false
inline ::Firebase::Storage::Internal::ModuleLogger* get_Logger() ;

/// @brief Method get_RootReference, addr 0x192ced4, size 0x7c, virtual false, abstract: false, final false
inline ::Firebase::Storage::StorageReference* get_RootReference() ;

static inline void setStaticF_logger(::Firebase::Storage::Internal::ModuleLogger*  value) ;

static inline void setStaticF_storageByInstanceKey(::System::Collections::Generic::Dictionary_2<::StringW,::Firebase::Storage::FirebaseStorage*>*  value) ;

/// @brief Method set_Logger, addr 0x192cdfc, size 0x8, virtual false, abstract: false, final false
inline void set_Logger(::Firebase::Storage::Internal::ModuleLogger*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseStorage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseStorage(FirebaseStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseStorage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseStorage(FirebaseStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11712};

/// @brief Field storageInternal, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Storage::FirebaseStorageInternal*  ___storageInternal;

/// @brief Field firebaseApp, offset: 0x18, size: 0x8, def value: None
 ::Firebase::FirebaseApp*  ___firebaseApp;

/// @brief Field instanceKey, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___instanceKey;

/// @brief Field <Logger>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Firebase::Storage::Internal::ModuleLogger*  ____Logger_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::FirebaseStorage, ___storageInternal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::FirebaseStorage, ___firebaseApp) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::FirebaseStorage, ___instanceKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::FirebaseStorage, ____Logger_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::FirebaseStorage, 0x30>, "Size mismatch!");

} // namespace end def Firebase::Storage
NEED_NO_BOX(::Firebase::Storage::FirebaseStorage);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::FirebaseStorage*, "Firebase.Storage", "FirebaseStorage");
