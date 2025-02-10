#pragma once
// IWYU pragma private; include "Firebase/Firestore/LoadBundleTaskProgress.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoadBundleTaskProgress)
namespace Firebase::Firestore {
class LoadBundleTaskProgressProxy;
}
namespace Firebase::Firestore {
struct LoadBundleTaskProgress_LoadBundleTaskState;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Firestore {
struct LoadBundleTaskProgress_LoadBundleTaskState;
}
namespace Firebase::Firestore {
class LoadBundleTaskProgress;
}
// Write type traits
MARK_VAL_T(::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState);
MARK_REF_PTR_T(::Firebase::Firestore::LoadBundleTaskProgress);
// Dependencies 
namespace Firebase::Firestore {
// Is value type: true
// CS Name: Firebase.Firestore.LoadBundleTaskProgress/LoadBundleTaskState
struct CORDL_TYPE LoadBundleTaskProgress_LoadBundleTaskState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LoadBundleTaskProgress_LoadBundleTaskState_Unwrapped
enum struct __LoadBundleTaskProgress_LoadBundleTaskState_Unwrapped : int32_t {
__E_Error = static_cast<int32_t>(0x0),
__E_InProgress = static_cast<int32_t>(0x1),
__E_Success = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LoadBundleTaskProgress_LoadBundleTaskState_Unwrapped () const noexcept {
return static_cast<__LoadBundleTaskProgress_LoadBundleTaskState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LoadBundleTaskProgress_LoadBundleTaskState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LoadBundleTaskProgress_LoadBundleTaskState(int32_t  value__) noexcept;

/// @brief Field Error value: I32(0)
static ::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState const Error;

/// @brief Field InProgress value: I32(1)
static ::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState const InProgress;

/// @brief Field Success value: I32(2)
static ::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11201};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState, 0x4>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies Firebase.Firestore.LoadBundleTaskProgress::LoadBundleTaskState, System.EventArgs
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.LoadBundleTaskProgress
class CORDL_TYPE LoadBundleTaskProgress : public ::System::EventArgs {
public:
// Declarations
using LoadBundleTaskState = ::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState;

 __declspec(property(get=get_BytesLoaded, put=set_BytesLoaded)) int64_t  BytesLoaded;

 __declspec(property(get=get_DocumentsLoaded, put=set_DocumentsLoaded)) int32_t  DocumentsLoaded;

 __declspec(property(get=get_State, put=set_State)) ::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState  State;

 __declspec(property(get=get_TotalBytes, put=set_TotalBytes)) int64_t  TotalBytes;

 __declspec(property(get=get_TotalDocuments, put=set_TotalDocuments)) int32_t  TotalDocuments;

/// @brief Field <BytesLoaded>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__BytesLoaded_k__BackingField, put=__cordl_internal_set__BytesLoaded_k__BackingField)) int64_t  _BytesLoaded_k__BackingField;

/// @brief Field <DocumentsLoaded>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__DocumentsLoaded_k__BackingField, put=__cordl_internal_set__DocumentsLoaded_k__BackingField)) int32_t  _DocumentsLoaded_k__BackingField;

/// @brief Field <State>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__State_k__BackingField, put=__cordl_internal_set__State_k__BackingField)) ::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState  _State_k__BackingField;

/// @brief Field <TotalBytes>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__TotalBytes_k__BackingField, put=__cordl_internal_set__TotalBytes_k__BackingField)) int64_t  _TotalBytes_k__BackingField;

/// @brief Field <TotalDocuments>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__TotalDocuments_k__BackingField, put=__cordl_internal_set__TotalDocuments_k__BackingField)) int32_t  _TotalDocuments_k__BackingField;

/// @brief Method Equals, addr 0x191a058, size 0xbc, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x191a114, size 0xc8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::Firebase::Firestore::LoadBundleTaskProgress* New_ctor(::Firebase::Firestore::LoadBundleTaskProgressProxy*  proxy) ;

constexpr int64_t const& __cordl_internal_get__BytesLoaded_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__BytesLoaded_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__DocumentsLoaded_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__DocumentsLoaded_k__BackingField() ;

constexpr ::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState const& __cordl_internal_get__State_k__BackingField() const;

constexpr ::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState& __cordl_internal_get__State_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__TotalBytes_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__TotalBytes_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__TotalDocuments_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__TotalDocuments_k__BackingField() ;

constexpr void __cordl_internal_set__BytesLoaded_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__DocumentsLoaded_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__State_k__BackingField(::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState  value) ;

constexpr void __cordl_internal_set__TotalBytes_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__TotalDocuments_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x1919f4c, size 0xbc, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Firestore::LoadBundleTaskProgressProxy*  proxy) ;

/// @brief Method get_BytesLoaded, addr 0x191a028, size 0x8, virtual false, abstract: false, final false
inline int64_t get_BytesLoaded() ;

/// @brief Method get_DocumentsLoaded, addr 0x191a008, size 0x8, virtual false, abstract: false, final false
inline int32_t get_DocumentsLoaded() ;

/// @brief Method get_State, addr 0x191a048, size 0x8, virtual false, abstract: false, final false
inline ::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState get_State() ;

/// @brief Method get_TotalBytes, addr 0x191a038, size 0x8, virtual false, abstract: false, final false
inline int64_t get_TotalBytes() ;

/// @brief Method get_TotalDocuments, addr 0x191a018, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TotalDocuments() ;

/// @brief Method set_BytesLoaded, addr 0x191a030, size 0x8, virtual false, abstract: false, final false
inline void set_BytesLoaded(int64_t  value) ;

/// @brief Method set_DocumentsLoaded, addr 0x191a010, size 0x8, virtual false, abstract: false, final false
inline void set_DocumentsLoaded(int32_t  value) ;

/// @brief Method set_State, addr 0x191a050, size 0x8, virtual false, abstract: false, final false
inline void set_State(::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState  value) ;

/// @brief Method set_TotalBytes, addr 0x191a040, size 0x8, virtual false, abstract: false, final false
inline void set_TotalBytes(int64_t  value) ;

/// @brief Method set_TotalDocuments, addr 0x191a020, size 0x8, virtual false, abstract: false, final false
inline void set_TotalDocuments(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadBundleTaskProgress() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadBundleTaskProgress", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadBundleTaskProgress(LoadBundleTaskProgress && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadBundleTaskProgress", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadBundleTaskProgress(LoadBundleTaskProgress const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11202};

/// @brief Field <DocumentsLoaded>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____DocumentsLoaded_k__BackingField;

/// @brief Field <TotalDocuments>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____TotalDocuments_k__BackingField;

/// @brief Field <BytesLoaded>k__BackingField, offset: 0x18, size: 0x8, def value: None
 int64_t  ____BytesLoaded_k__BackingField;

/// @brief Field <TotalBytes>k__BackingField, offset: 0x20, size: 0x8, def value: None
 int64_t  ____TotalBytes_k__BackingField;

/// @brief Field <State>k__BackingField, offset: 0x28, size: 0x4, def value: None
 ::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState  ____State_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::LoadBundleTaskProgress, ____DocumentsLoaded_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::LoadBundleTaskProgress, ____TotalDocuments_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::LoadBundleTaskProgress, ____BytesLoaded_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::LoadBundleTaskProgress, ____TotalBytes_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::LoadBundleTaskProgress, ____State_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::LoadBundleTaskProgress, 0x30>, "Size mismatch!");

} // namespace end def Firebase::Firestore
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState, "Firebase.Firestore", "LoadBundleTaskProgress/LoadBundleTaskState");
NEED_NO_BOX(::Firebase::Firestore::LoadBundleTaskProgress);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::LoadBundleTaskProgress*, "Firebase.Firestore", "LoadBundleTaskProgress");
