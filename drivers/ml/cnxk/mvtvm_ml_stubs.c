/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright (c) 2023 Marvell.
 */

#include <rte_mldev.h>

#include "mvtvm_ml_stubs.h"

#include "cnxk_ml_dev.h"
#include "cnxk_ml_model.h"

enum cnxk_ml_model_type
mvtvm_ml_model_type_get(struct rte_ml_model_params *params)
{
	RTE_SET_USED(params);

	return ML_CNXK_MODEL_TYPE_UNKNOWN;
}

int
mvtvm_ml_dev_configure(struct cnxk_ml_dev *cnxk_mldev, const struct rte_ml_dev_config *conf)
{
	RTE_SET_USED(cnxk_mldev);
	RTE_SET_USED(conf);

	return 0;
}

int
mvtvm_ml_dev_close(struct cnxk_ml_dev *cnxk_mldev)
{
	RTE_SET_USED(cnxk_mldev);

	return 0;
}
