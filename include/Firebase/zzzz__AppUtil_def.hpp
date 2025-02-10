#pragma once
// IWYU pragma private; include "Firebase/AppUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AppUtil)
namespace Firebase {
class LogUtil_LogMessageDelegate;
}
// Forward declare root types
namespace Firebase {
class AppUtil;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::AppUtil);
// Dependencies System.Object
namespace Firebase {
// Is value type: false
// CS Name: Firebase.AppUtil
class CORDL_TYPE AppUtil : public ::System::Object {
public:
// Declarations
/// @brief Method AppEnableLogCallback, addr 0x18f0404, size 0x80, virtual false, abstract: false, final false
static inline void AppEnableLogCallback(bool  arg0) ;

/// @brief Method GetEnabledAppCallbackByName, addr 0x18f0594, size 0x88, virtual false, abstract: false, final false
static inline bool GetEnabledAppCallbackByName(::StringW  arg0) ;

/// @brief Method PollCallbacks, addr 0x18f038c, size 0x78, virtual false, abstract: false, final false
static inline void PollCallbacks() ;

/// @brief Method SetEnabledAllAppCallbacks, addr 0x18f0484, size 0x80, virtual false, abstract: false, final false
static inline void SetEnabledAllAppCallbacks(bool  arg0) ;

/// @brief Method SetEnabledAppCallbackByName, addr 0x18f0504, size 0x90, virtual false, abstract: false, final false
static inline void SetEnabledAppCallbackByName(::StringW  arg0, bool  arg1) ;

/// @brief Method SetLogFunction, addr 0x18f061c, size 0x80, virtual false, abstract: false, final false
static inline void SetLogFunction(::Firebase::LogUtil_LogMessageDelegate*  arg0) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppUtil", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AppUtil(AppUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppUtil", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppUtil(AppUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11820};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::AppUtil, 0x10>, "Size mismatch!");

} // namespace end def Firebase
NEED_NO_BOX(::Firebase::AppUtil);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::AppUtil*, "Firebase", "AppUtil");
