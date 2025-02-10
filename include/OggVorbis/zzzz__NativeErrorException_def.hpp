#pragma once
// IWYU pragma private; include "OggVorbis/NativeErrorException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OggVorbis/zzzz__NativeErrorCode_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeErrorException)
namespace OggVorbis {
struct NativeErrorCode;
}
// Forward declare root types
namespace OggVorbis {
class NativeErrorException;
}
// Write type traits
MARK_REF_PTR_T(::OggVorbis::NativeErrorException);
// Dependencies OggVorbis.NativeErrorCode, System.Exception
namespace OggVorbis {
// Is value type: false
// CS Name: OggVorbis.NativeErrorException
class CORDL_TYPE NativeErrorException : public ::System::Exception {
public:
// Declarations
 __declspec(property(get=get_NativeErrorCode)) ::OggVorbis::NativeErrorCode  NativeErrorCode;

/// @brief Field <NativeErrorCode>k__BackingField, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__NativeErrorCode_k__BackingField, put=__cordl_internal_set__NativeErrorCode_k__BackingField)) ::OggVorbis::NativeErrorCode  _NativeErrorCode_k__BackingField;

static inline ::OggVorbis::NativeErrorException* New_ctor(::OggVorbis::NativeErrorCode  nativeErrorCode) ;

/// @brief Method ThrowExceptionIfNecessary, addr 0x319ca10, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowExceptionIfNecessary(int32_t  returnValue) ;

/// @brief Method ToString, addr 0x319c9b0, size 0x60, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::OggVorbis::NativeErrorCode const& __cordl_internal_get__NativeErrorCode_k__BackingField() const;

constexpr ::OggVorbis::NativeErrorCode& __cordl_internal_get__NativeErrorCode_k__BackingField() ;

constexpr void __cordl_internal_set__NativeErrorCode_k__BackingField(::OggVorbis::NativeErrorCode  value) ;

/// @brief Method .ctor, addr 0x319c8e4, size 0xcc, virtual false, abstract: false, final false
inline void _ctor(::OggVorbis::NativeErrorCode  nativeErrorCode) ;

/// @brief Method get_NativeErrorCode, addr 0x319c8dc, size 0x8, virtual false, abstract: false, final false
inline ::OggVorbis::NativeErrorCode get_NativeErrorCode() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeErrorException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeErrorException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeErrorException(NativeErrorException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeErrorException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeErrorException(NativeErrorException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12480};

/// @brief Field <NativeErrorCode>k__BackingField, offset: 0x8c, size: 0x4, def value: None
 ::OggVorbis::NativeErrorCode  ____NativeErrorCode_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OggVorbis::NativeErrorException, ____NativeErrorCode_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OggVorbis::NativeErrorException, 0x90>, "Size mismatch!");

} // namespace end def OggVorbis
NEED_NO_BOX(::OggVorbis::NativeErrorException);
DEFINE_IL2CPP_ARG_TYPE(::OggVorbis::NativeErrorException*, "OggVorbis", "NativeErrorException");
