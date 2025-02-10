#pragma once
// IWYU pragma private; include "VROSC/IngameConsole.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IngameConsole)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace VROSC {
class IngameConsole;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::IngameConsole);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.IngameConsole
class CORDL_TYPE IngameConsole : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _excludes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__excludes, put=__cordl_internal_set__excludes)) ::ArrayW<::StringW,::Array<::StringW>*>  _excludes;

/// @brief Field _lines, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__lines, put=__cordl_internal_set__lines)) int32_t  _lines;

/// @brief Field _loggedErrorStacks, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__loggedErrorStacks, put=__cordl_internal_set__loggedErrorStacks)) ::System::Collections::Generic::List_1<::StringW>*  _loggedErrorStacks;

/// @brief Field _maxLines, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxLines, put=__cordl_internal_set__maxLines)) int32_t  _maxLines;

/// @brief Field _showErrors, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__showErrors, put=__cordl_internal_set__showErrors)) bool  _showErrors;

/// @brief Field _showLogs, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get__showLogs, put=__cordl_internal_set__showLogs)) bool  _showLogs;

/// @brief Field _showWarnings, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__showWarnings, put=__cordl_internal_set__showWarnings)) bool  _showWarnings;

/// @brief Field _text, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshPro>  _text;

/// @brief Field _threadLogs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__threadLogs, put=setStaticF__threadLogs)) ::System::Collections::Generic::List_1<::StringW>*  _threadLogs;

/// @brief Method Awake, addr 0x1712774, size 0x68, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DebugFromThread, addr 0x1712908, size 0xcc, virtual false, abstract: false, final false
static inline void DebugFromThread(::StringW  message) ;

/// @brief Method LogErrorToFirebase, addr 0x1712d94, size 0x200, virtual false, abstract: false, final false
inline void LogErrorToFirebase(::StringW  message, ::StringW  stack) ;

/// @brief Method LogReceived, addr 0x1712b1c, size 0x278, virtual false, abstract: false, final false
inline void LogReceived(::StringW  logString, ::StringW  stackTrace, ::UnityEngine::LogType  logType) ;

static inline ::VROSC::IngameConsole* New_ctor() ;

/// @brief Method OnDisable, addr 0x1712a78, size 0xa4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x17129d4, size 0xa4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x17127dc, size 0x12c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __cordl_internal_get__excludes() const;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __cordl_internal_get__excludes() ;

constexpr int32_t const& __cordl_internal_get__lines() const;

constexpr int32_t& __cordl_internal_get__lines() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__loggedErrorStacks() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__loggedErrorStacks() ;

constexpr int32_t const& __cordl_internal_get__maxLines() const;

constexpr int32_t& __cordl_internal_get__maxLines() ;

constexpr bool const& __cordl_internal_get__showErrors() const;

constexpr bool& __cordl_internal_get__showErrors() ;

constexpr bool const& __cordl_internal_get__showLogs() const;

constexpr bool& __cordl_internal_get__showLogs() ;

constexpr bool const& __cordl_internal_get__showWarnings() const;

constexpr bool& __cordl_internal_get__showWarnings() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__text() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__text() ;

constexpr void __cordl_internal_set__excludes(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr void __cordl_internal_set__lines(int32_t  value) ;

constexpr void __cordl_internal_set__loggedErrorStacks(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__maxLines(int32_t  value) ;

constexpr void __cordl_internal_set__showErrors(bool  value) ;

constexpr void __cordl_internal_set__showLogs(bool  value) ;

constexpr void __cordl_internal_set__showWarnings(bool  value) ;

constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x1712f94, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF__threadLogs() ;

static inline void setStaticF__threadLogs(::System::Collections::Generic::List_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IngameConsole() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IngameConsole", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IngameConsole(IngameConsole && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IngameConsole", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IngameConsole(IngameConsole const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{904};

/// @brief Field _text, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____text;

/// @brief Field _excludes, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW,::Array<::StringW>*>  ____excludes;

/// @brief Field _showErrors, offset: 0x30, size: 0x1, def value: None
 bool  ____showErrors;

/// @brief Field _showWarnings, offset: 0x31, size: 0x1, def value: None
 bool  ____showWarnings;

/// @brief Field _showLogs, offset: 0x32, size: 0x1, def value: None
 bool  ____showLogs;

/// @brief Field _lines, offset: 0x34, size: 0x4, def value: None
 int32_t  ____lines;

/// @brief Field _maxLines, offset: 0x38, size: 0x4, def value: None
 int32_t  ____maxLines;

/// @brief Field _loggedErrorStacks, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____loggedErrorStacks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::IngameConsole, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::IngameConsole, ____excludes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::IngameConsole, ____showErrors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::IngameConsole, ____showWarnings) == 0x31, "Offset mismatch!");

static_assert(offsetof(::VROSC::IngameConsole, ____showLogs) == 0x32, "Offset mismatch!");

static_assert(offsetof(::VROSC::IngameConsole, ____lines) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::IngameConsole, ____maxLines) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::IngameConsole, ____loggedErrorStacks) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::IngameConsole, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::IngameConsole);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IngameConsole*, "VROSC", "IngameConsole");
