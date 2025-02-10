#pragma once
// IWYU pragma private; include "Firebase/Storage/Internal/ModuleLogger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/zzzz__LogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ModuleLogger)
namespace Firebase {
struct LogLevel;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace System {
class WeakReference;
}
// Forward declare root types
namespace Firebase::Storage::Internal {
class ModuleLogger;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Storage::Internal::ModuleLogger);
// Dependencies Firebase.LogLevel, System.Object
namespace Firebase::Storage::Internal {
// Is value type: false
// CS Name: Firebase.Storage.Internal.ModuleLogger
class CORDL_TYPE ModuleLogger : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Level, put=set_Level)) ::Firebase::LogLevel  Level;

 __declspec(property(get=get_Tag, put=set_Tag)) ::StringW  Tag;

/// @brief Field children, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_children, put=__cordl_internal_set_children)) ::System::Collections::Generic::List_1<::Firebase::Storage::Internal::ModuleLogger*>*  children;

/// @brief Field lockObject, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lockObject, put=setStaticF_lockObject)) ::System::Object*  lockObject;

/// @brief Field logLevel, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_logLevel, put=__cordl_internal_set_logLevel)) ::Firebase::LogLevel  logLevel;

/// @brief Field parent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::Firebase::Storage::Internal::ModuleLogger*  parent;

/// @brief Field roots, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_roots, put=setStaticF_roots)) ::System::Collections::Generic::List_1<::System::WeakReference*>*  roots;

/// @brief Field tag, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_tag, put=__cordl_internal_set_tag)) ::StringW  tag;

/// @brief Method Finalize, addr 0x192c1c4, size 0x398, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method LogMessage, addr 0x192a6ac, size 0x118, virtual false, abstract: false, final false
inline void LogMessage(::Firebase::LogLevel  level, ::StringW  message) ;

static inline ::Firebase::Storage::Internal::ModuleLogger* New_ctor(::Firebase::Storage::Internal::ModuleLogger*  parentLogger) ;

constexpr ::System::Collections::Generic::List_1<::Firebase::Storage::Internal::ModuleLogger*>* const& __cordl_internal_get_children() const;

constexpr ::System::Collections::Generic::List_1<::Firebase::Storage::Internal::ModuleLogger*>*& __cordl_internal_get_children() ;

constexpr ::Firebase::LogLevel const& __cordl_internal_get_logLevel() const;

constexpr ::Firebase::LogLevel& __cordl_internal_get_logLevel() ;

constexpr ::Firebase::Storage::Internal::ModuleLogger* const& __cordl_internal_get_parent() const;

constexpr ::Firebase::Storage::Internal::ModuleLogger*& __cordl_internal_get_parent() ;

constexpr ::StringW const& __cordl_internal_get_tag() const;

constexpr ::StringW& __cordl_internal_get_tag() ;

constexpr void __cordl_internal_set_children(::System::Collections::Generic::List_1<::Firebase::Storage::Internal::ModuleLogger*>*  value) ;

constexpr void __cordl_internal_set_logLevel(::Firebase::LogLevel  value) ;

constexpr void __cordl_internal_set_parent(::Firebase::Storage::Internal::ModuleLogger*  value) ;

constexpr void __cordl_internal_set_tag(::StringW  value) ;

/// @brief Method .ctor, addr 0x1929a68, size 0x2c0, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Storage::Internal::ModuleLogger*  parentLogger) ;

static inline ::System::Object* getStaticF_lockObject() ;

static inline ::System::Collections::Generic::List_1<::System::WeakReference*>* getStaticF_roots() ;

/// @brief Method get_Level, addr 0x192c55c, size 0xfc, virtual false, abstract: false, final false
inline ::Firebase::LogLevel get_Level() ;

/// @brief Method get_Tag, addr 0x192c660, size 0x10c, virtual false, abstract: false, final false
inline ::StringW get_Tag() ;

static inline void setStaticF_lockObject(::System::Object*  value) ;

static inline void setStaticF_roots(::System::Collections::Generic::List_1<::System::WeakReference*>*  value) ;

/// @brief Method set_Level, addr 0x192c658, size 0x8, virtual false, abstract: false, final false
inline void set_Level(::Firebase::LogLevel  value) ;

/// @brief Method set_Tag, addr 0x192c76c, size 0x8, virtual false, abstract: false, final false
inline void set_Tag(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModuleLogger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModuleLogger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ModuleLogger(ModuleLogger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModuleLogger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModuleLogger(ModuleLogger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11711};

/// @brief Field parent, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Storage::Internal::ModuleLogger*  ___parent;

/// @brief Field children, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Firebase::Storage::Internal::ModuleLogger*>*  ___children;

/// @brief Field tag, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___tag;

/// @brief Field logLevel, offset: 0x28, size: 0x4, def value: None
 ::Firebase::LogLevel  ___logLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::Internal::ModuleLogger, ___parent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::Internal::ModuleLogger, ___children) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::Internal::ModuleLogger, ___tag) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::Internal::ModuleLogger, ___logLevel) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::Internal::ModuleLogger, 0x30>, "Size mismatch!");

} // namespace end def Firebase::Storage::Internal
NEED_NO_BOX(::Firebase::Storage::Internal::ModuleLogger);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::Internal::ModuleLogger*, "Firebase.Storage.Internal", "ModuleLogger");
