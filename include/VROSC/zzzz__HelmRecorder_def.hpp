#pragma once
// IWYU pragma private; include "VROSC/HelmRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SourceRecorder_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HelmRecorder)
// Forward declare root types
namespace VROSC {
class HelmRecorder;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::HelmRecorder);
// Dependencies VROSC.SourceRecorder
namespace VROSC {
// Is value type: false
// CS Name: VROSC.HelmRecorder
class CORDL_TYPE HelmRecorder : public ::VROSC::SourceRecorder {
public:
// Declarations
/// @brief Field _secondaryHelmData, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__secondaryHelmData, put=__cordl_internal_set__secondaryHelmData)) ::ArrayW<float_t,::Array<float_t>*>  _secondaryHelmData;

static inline ::VROSC::HelmRecorder* New_ctor() ;

/// @brief Method OnAudioFilterRead, addr 0x17ce2a8, size 0xe0, virtual false, abstract: false, final false
inline void OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels) ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__secondaryHelmData() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__secondaryHelmData() ;

constexpr void __cordl_internal_set__secondaryHelmData(::ArrayW<float_t,::Array<float_t>*>  value) ;

/// @brief Method .ctor, addr 0x17ce694, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HelmRecorder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HelmRecorder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HelmRecorder(HelmRecorder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelmRecorder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelmRecorder(HelmRecorder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{295};

/// @brief Field _secondaryHelmData, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____secondaryHelmData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::HelmRecorder, ____secondaryHelmData) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::HelmRecorder, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::HelmRecorder);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HelmRecorder*, "VROSC", "HelmRecorder");
